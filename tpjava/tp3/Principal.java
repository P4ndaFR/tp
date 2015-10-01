public class Principal
{
	public static void main(String[] args)
	{
		AfficheTexte a = new AfficheTexte("Hello World 1");
		AfficheTexte b = new AfficheTexte("Hello World 2");
		AfficheTexte c = new AfficheTexte("Hello World 3");
		a.start();
		b.start();
		c.start();
	}
}