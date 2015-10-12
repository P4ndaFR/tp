   import javax.swing.*;
   import java.awt.*;
      
   public class FenetreGraphique extends JFrame {
           
      JButton bouton;
      PanelDessin paneldessin1, paneldessin2;
   	          
      public FenetreGraphique() {
         super();
         this.setSize(800, 500);
         this.setTitle("TP3");
      	
         JPanel panel = new JPanel();
         GridLayout gl = new GridLayout(1,0); //1 ligne et n colonnes
         panel.setLayout(gl);
      		
         bouton = new JButton("Anim");
         paneldessin1 = new PanelDessin("Fenetre1");
         paneldessin2 = new PanelDessin("Fenetre2");	
         panel.add(bouton);
         panel.add(paneldessin1);
         panel.add(paneldessin2);
      	         
         this.setDefaultCloseOperation(EXIT_ON_CLOSE);
         this.setContentPane(panel);
         this.setVisible(true);
      }
   
           		
      public static void main(String args[]) {
         FenetreGraphique f = new FenetreGraphique(); 
      }
   
   
   }

