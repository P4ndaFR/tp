public class Principal
{
	public static void main(String[] args)
	{
		AfficheTexte a = new AfficheTexte("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
		AfficheTexte b = new AfficheTexte("###################################");
		AfficheTexte c = new AfficheTexte("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
		a.start();
		b.start();
		c.start();
	}
}