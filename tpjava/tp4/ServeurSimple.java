import java.io.*;
import java.net.*;
import javax.swing.*;
import java.awt.*;
/**
* Classe ServeurSimple
* Cette classe permet de créer un serveur pour communiquer avec un client TCP
* @see ClientSimple
* @version 1.0
*/
public class ServeurSimple implements Runnable
{
	private int port = 8888;
	private ServerSocket socketServeur = null;
	private Socket socket = null;
	private Thread host;
	/**
	* Constructeur par défaut
	* Les paramètres sont initialisés "en dur"
	*/


	/* Connexion */
	public ServeurSimple() 
	{
		try 
		{
			socketServeur = new ServerSocket( port );
			//System.out.println("Bonjour, je suis le serveur\nJ'attends des clients sur leport " + socketServeur.getLocalPort());
			message.append("Bonjour, je suis le serveur\nJ'attends des clients sur leport " + socketServeur.getLocalPort()+"\n");
		}
		catch( IOException e ) 
		{
			//System.err.println( "Impossible de créer un ServerSocket" );
			message.append("Impossible de créer un ServerSocket\n");
		}
			while (true) 
			{
				try 
				{
					socket = socketServeur.accept();
				}
				catch( IOException e ) {}

			this.host = new Thread(this);
			host.start();
			}
	}

	

	public void run()
	{
		try 
		{
		//System.out.println("Connexion acceptée : " + socket.getInetAddress());
		message.append("Connexion acceptée : " + socket.getInetAddress() +"\n");

		BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
		while(true) 
		{
			String message = in.readLine();
			if (message == null) break;
			System.out.println(message);
		}

		socket.close();
		//System.out.println("Le serveur ferme la socket avec le client");
		message.append("Le serveur ferme la socket avec le client\n");
		}
		catch( IOException e ) 
		{
			//System.err.println( "Impossible de créer un ServerSocket" );
			message.append("Impossible de créer un ServerSocket\n");
		}
		
	}

	public static void main( String [] args ) 
	{
		
		new ServeurSimple();
	}
}