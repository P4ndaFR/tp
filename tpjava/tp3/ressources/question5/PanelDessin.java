   import javax.swing.*;
   import java.awt.*;

   public class PanelDessin extends JPanel {
   
      private int x,y;
      private int dim;
      private boolean anim;
      private JSlider slider;
      private int vitesse;
      private String nom;
   
      public PanelDessin(String nom) {
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
      	
         
      }
   
      public void bougeBalle() {
         if (anim) {
            y+=vitesse;
            if (y + dim > this.getHeight()) this.anim = false;  				
            this.repaint();
            System.out.println(nom + " : " + y);
         }
      
      }
   	     	
      public void startAnim() {
         anim = true;
         while (y < this.getHeight() - dim - vitesse)
            bougeBalle();
         anim = false;	
      }
   	
      public void stopAnim(){
         anim = false;
      } 
   
      public void paintComponent(Graphics g) {
         super.paintComponent(g);  
         g.setColor(Color.BLUE);
         g.fillOval(x,y,dim,dim);
      }
   }