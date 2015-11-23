import java.sql.*;
import java.util.*;

public class GestionBDD
{
	private ArrayList<ElementBDD> list;
	private String driver,url,usr,passwd;

	public GestionBDD()
	{
		this.list = new ArrayList<ElementBDD>();
		this.driver = "com.mysql.jdbc.Driver";
		this.url = "jdbc:mysql://192.168.2.5/inventaire";
		this.usr = "guest";
		this.passwd = "guest";
	}

	public ArrayList<ElementBDD> getList()
	{
		this.listerArticles();
		return list;
	}

	public void listerArticles() 
	{
		Connection con = null;
		Statement st = null;
		ResultSet rs = null;
		try 
		{
			Class.forName(driver).newInstance();
			con = DriverManager.getConnection(url,usr,passwd);
			st = con.createStatement();
			rs = st.executeQuery("SELECT id, nom, quantite FROM articles");
			// remise à 0 de la liste - utile pour les mises à jour
			list.clear();
			// Stocker les enregistrements dans la liste
			while(rs.next()) 
			{
				int id = rs.getInt(1);
				String nom = new String(rs.getString(2));
				int quantite = rs.getInt(3);
				list.add(new ElementBDD(nom, quantite)); // ajout
				System.out.println(nom + "          " + quantite);
			}
		}
		catch (Exception e) 
		{
			System.err.println("Exception: " + e.getMessage());
		}

		finally 
		{
			try 
			{
				if(rs != null) rs.close();
				if(st != null) st.close();
				if(con != null) con.close();
			}
			catch (SQLException e) {}
		}
	}

	public void retirerArticle(String nomArticle)
	{
		mettreAjourQuantite(nomArticle,-1);
	}

	public void deposerArticle(String nomArticle)
	{
		mettreAjourQuantite(nomArticle,1);
	}

	public void mettreAjourQuantite(String nomArticle,int value)
	{
		Connection con = null;
		Statement st = null;
		ResultSet rs = null;
		try 
		{
			Class.forName("com.mysql.jdbc.Driver").newInstance();
			con = DriverManager.getConnection("jdbc:mysql://192.168.2.5/inventaire","guest", "guest");
			st = con.createStatement(
			ResultSet.TYPE_SCROLL_INSENSITIVE,
			ResultSet.CONCUR_UPDATABLE);
			rs = st.executeQuery("SELECT id, nom, quantite FROM articles");
			// modifier la quantité pour l'article nomArticle
			while(rs.next())
			{
				int id = rs.getInt(1);
				String nom = rs.getString(2);
				int quantite = rs.getInt(3);
				if ( nom.equals(nomArticle) ) 
				{
					if ( (quantite == 0) && (value == -1) ) 
					{
						break;
					}
					rs.updateInt(3, (quantite+value));
					rs.updateRow();
					break;
				}
			}
		}
		catch (Exception e) 
		{
			System.err.println("Exception: " + e.getMessage());
		}

		finally 
		{
			try 
			{
				if (rs != null) rs.close();
				if (st != null) st.close();
				if (con != null) con.close();
			} 
			catch (SQLException e){}
		}
	}
}