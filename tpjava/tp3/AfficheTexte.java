import java.lang.*;

public class AfficheTexte implements Runnable
{
	private String texte;
	private Thread ma_tache;

	public AfficheTexte( String texte )
	{
		ma_tache = new Thread(this);	
		this.texte = new String(texte);
	}

	public void start()
	{
		ma_tache.start();
	}

	public void run()
	{
		try
		{
			ma_tache.sleep(1000);
		}
		catch (InterruptedException exception) {}

		for(int c=0; c<texte.length();c++)
			System.out.print(texte.charAt(c));
		System.out.println();
	}
}