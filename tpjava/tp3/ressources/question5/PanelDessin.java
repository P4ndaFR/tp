   import javax.swing.*;
   import javax.swing.event.*;
   import java.awt.*;

   public class PanelDessin extends JPanel implements Runnable,ChangeListener{
   
      private int x,y;
      private int dim;
      private boolean anim;
      private JSlider slider;
      private int vitesse;
      private String nom;
      private Thread animation;
   
      //public PanelDessin(String nom) 
      {
         super();
         this.nom = nom;
         this.dim = 80; // taille de la balle
         this.x = 100;
         this.y = dim;
         this.anim = false;
         this.vitesse = 10;
         this.slider = new JSlider(JSlider.HORIZONTAL, 0, 100, vitesse);
         this.setBorder(BorderFactory.createLineBorder(Color.black));
         this.setLayout(new BoxLayout(this, BoxLayout.PAGE_AXIS));
         JLabel sliderLabel = new JLabel("Vitesse de la balle", JLabel.CENTER);
         sliderLabel.setAlignmentX(Component.CENTER_ALIGNMENT);
         this.add(sliderLabel);
         this.add(slider);
         slider.addChangeListener(this);
         animation = new Thread(this);
      }
   
      public void bougeBalle() 
      {
         if (anim) {
            y+=vitesse;
            if (y + dim > this.getHeight()) this.anim = false;  				
            this.repaint();
            System.out.println(nom + " : " + y);
         }
      }
   	     	
      public void startAnim() 
      {
         anim = true;
         while (y < this.getHeight() - dim - vitesse)
            bougeBalle();
         anim = false;	
      }
   	
      public void stopAnim()
      {
         anim = false;
      } 
   
      public void paintComponent(Graphics g) 
      {
         super.paintComponent(g);  
         g.setColor(Color.BLUE);
         g.fillOval(x,y,dim,dim);
      }

      public void run()
      {
         anim=true;
         while(y < this.getHeight() - dim - vitesse)
         {  
            try
            {
            animation.sleep(40);
            }
            catch (InterruptedException exception) {}

            this.bougeBalle();
         }
         anim=false;
      }

      public void start()
      {
         animation.start();
      }

      public void stateChanged(ChangeEvent e)
      {
         System.out.println("##################");
         this.vitesse=slider.getValue();
      }
   }