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
		for(int c=0; c<texte.length();c++)
		{
			try
			{
				ma_tache.sleep(500);
			}
			catch (InterruptedException exception) {}

			System.out.print(texte.charAt(c));
		}
		System.out.println();
	}
}

class AfficheTexte2 extends Thread
{
	private String texte;

	public AfficheTexte2( String texte )
	{
		super();
		this.texte = new String(texte);
	}

	public void run()
	{
		for(int c=0; c<texte.length();c++)
		{
			try
			{
				this.sleep(200);
			}
			catch (InterruptedException exception) {}

			System.out.print(texte.charAt(c));
		}
		System.out.println();
	}
}