import java.util.*;

/*Classe de gestion du duel
*@author Arnaud Prémel-Cabic
*/
public class PPC{

   int choix;
   int iaChoix;
   
   /*Constructeur
   *@author Arnaud Prémel-Cabic
   */
   public PPC(){
      this.choix = 0; 
   }
   
   /*Méthode de gestion du duel
   *@param pChoix Choix du joueur
   *@return resDuel Résultat du Duel
   *@author Arnaud Prémel-Cabic
   */
   public int duel(int pChoix){
      
   
      int min = 1;
      int max = 3;
      int resDuel = 0;
      Random rand = new Random();
      iaChoix = rand.nextInt(max - min + 1) + min;
      
      if (pChoix == iaChoix)
      {
         System.out.println(pChoix + " " + iaChoix + " Égalité");
         resDuel = 0;
      }
      if (pChoix == 1 && iaChoix == 2)
      {
         System.out.println("1 2 Victoire");
         resDuel = 1;
      }
      if (pChoix == 1 && iaChoix == 3)
      {
         System.out.println("1 3 Défaite");
         resDuel = -1;
      }
      if (pChoix == 2 && iaChoix == 1)
      {
         System.out.println("2 1 Défaite");
         resDuel = -1;
      }
      if (pChoix == 2 && iaChoix == 3)
      {
         System.out.println("2 3 Victoire");
         resDuel = 1;
      }
      if (pChoix == 3 && iaChoix == 1)
      {
         System.out.println("3 1 Victoire");
         resDuel = 1;
      }
      if (pChoix == 3 && iaChoix == 2)
      {
         System.out.println("3 2 Défaite");
         resDuel = -1;
      }
      return resDuel;
   }

   /*Retourne le choix de l'IA
   *@return iaChoix le choix de l'IA
   *@author Antoine Blondeau
   */
   public int getIAChoix()
   {
      return iaChoix;
   }
  
}