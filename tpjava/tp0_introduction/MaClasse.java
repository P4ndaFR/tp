public class MaClasse 
{
	private int maVariable;

	public MaClasse()
	{
		maVariable=1;
		System.out.println("Constructeur , variable"+maVariable);
	}

	public void maMethode(int i)
	{
		maVariable = 10;
		System.out.println("maVariable"+i);
	}
}