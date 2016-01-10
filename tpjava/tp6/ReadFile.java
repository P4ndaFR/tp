import java.io.*;
import java.util.*;

public class ReadFile 
{
	public static void main(String[] args)
	{
		String chaine="";
		String fichier ="data";
		int i = 0;
		Vector<Personne> vec = new Vector<Personne>();
		
		//lecture du fichier texte	
		try{
			InputStream ips=new FileInputStream(fichier); 
			InputStreamReader ipsr=new InputStreamReader(ips);
			BufferedReader br=new BufferedReader(ipsr);
			String ligne;
			StringTokenizer st;
			Personne tmp;
			while ((ligne=br.readLine())!=null)
			{
				st = new StringTokenizer(ligne);
				tmp = new Personne(st.nextToken(),st.nextToken(),Integer.parseInt(st.nextToken() ) );
				vec.add(tmp);
				chaine+=ligne+"\n";
			}
			br.close(); 
		}		
		catch (Exception e){
			System.out.println(e.toString());
		}

		for (i=0;i<vec.size();i++ ) 
		{
			System.out.println(vec.elementAt(i));
		}
		

		/*
		//création ou ajout dans le fichier texte
		try {
			FileWriter fw = new FileWriter (fichier);
			BufferedWriter bw = new BufferedWriter (fw);
			PrintWriter fichierSortie = new PrintWriter (bw); 
				fichierSortie.println (chaine+"\n test de lecture et écriture !!"); 
			fichierSortie.close();
			System.out.println("Le fichier " + fichier + " a été créé!"); 
		}
		catch (Exception e){
			System.out.println(e.toString());
		}
		*/	
	}
}