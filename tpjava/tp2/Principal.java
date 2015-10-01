public class Principal 
{
	public static void main( String args[])
	{
		int hauteur = 0;
		int largeur = 0;
		
		if(args.length > 2 || args.length < 2)
		{
			System.out.println("Nombre d'argument incohérent");
			return;
		}

		try
		{
			hauteur=java.lang.Integer.parseInt(args[0]);
		}
		catch(NumberFormatException e)
		{
			System.out.println("Exception générée par java.lang.Integer.parseInt : " + e);
		}

		try
		{
			largeur=java.lang.Integer.parseInt(args[1]);
		}
		catch(NumberFormatException e)
		{
			System.out.println("Exception générée par java.lang.Integer.parseInt : " + e);
		}

		Fenetre f = new Fenetre(hauteur,largeur);
	
	}	

}