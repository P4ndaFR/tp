public class ElementBDD
{
	// Attributs
	private String nom;
	private int quantite;

	//Constructeur
	public ElementBDD(String nom,int quantite)
	{
		this.nom = nom;
		this.quantite = quantite;
	}

	public String toString()
	{
		return this.quantite + "   " + this.nom;
	}

	public String getNom()
	{
		return nom;
	}

	public int getQuantite()
	{
		return quantite;
	}
}