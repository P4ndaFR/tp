public class Principal
{
	public static void main(String[] args)
	{
		/*Fenetre f = new Fenetre('#');
		f.afficher();*/
		Gestionnaire g = new Gestionnaire();

		try
		{
			g.activer();
		}
		catch(java.io.IOException e) {}
	}
}