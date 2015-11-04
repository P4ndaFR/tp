import java.io.*;
import java.net.*;
/**
* Classe ClientSimple
* Cette classe permet de créer un client pour communiquer avec un serveur TCP
* @see ServeurSimple
* @version 1.0
*/
public class ClientSimple 
{
	private InetAddress hote;
	private int port;

	private Socket socket;
	/**
	* Constructeur par défaut
	* Les paramètres sont initialisés "en dur"
	*/
	public ClientSimple(String adress) 
	{
		
		//initialisations
		this.hote = null;
		this.port = 8888;
		this.socket = null;
		//recuperation de l'adresse IP du serveur (votre machine)
		
		try 
		{
			if (adress.equals("NoArguments")) 
			{
				hote = InetAddress.getLocalHost();
			}
			else
			{
				hote = InetAddress.getByName(adress);
			}
			
		}
		catch (UnknownHostException e) {}

		try 
		{
			socket = new Socket(hote, port);
			System.out.println("Connecté au serveur: " + socket.getInetAddress() + ":" +socket.getPort());
			//l'objet input contient le texte tapé sur la console
			BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
			//l'objet output est ce qui transmis sur la socket
			PrintWriter output = new PrintWriter(socket.getOutputStream(),true);
			String message;
			//acquisition via le clavier d'un message et envoi au serveur
			while(true) 
			{
				message = input.readLine();
				if (message.equals("STOP"))
				{
					break;
				}
				output.println(message);
			}
		}
		catch(IOException e) {}

	try {
		//fermeture de la socket
		socket.close();
		}
		catch(IOException e) {}
		
	}

	public static void main( String [] args ) 
	{
		if (args.length == 0)
		{
			new ClientSimple("NoArguments");
		}
		else
		{
			new ClientSimple(args[0]);
		}
	}
}