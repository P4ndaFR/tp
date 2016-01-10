class Personne
{
	protected String nom,prenom;
	protected int naissance;

	public Personne()
	{
		this.nom = "####";
		this.prenom = "####";
		this.naissance = 0;
	}

	public Personne(String nom,String prenom,int naissance)
	{
		this.nom	   = nom;
		this.prenom    = prenom;
		this.naissance = naissance;
	}

	public Personne(Personne p)
	{
		this.nom = p.nom;
		this.prenom = p.prenom;
		this.naissance = p.naissance;
	}

	public String getNom()
	{
		return this.nom;
	}

	public String getPrenom()
	{
		return this.prenom;
	}

	public int getNaissance()
	{
		return this.naissance;
	}

	public void setNom (String nom)
	{
		this.nom=nom;
	}

	public void setPrenom (String prenom)
	{
		this.prenom=prenom;
	}

	public void setNaissance (int naissance)
	{
		this.naissance=naissance;
	}

	public String toString()
	{
		return this.nom + "     " + this.prenom + "     " + this.naissance;
	}
}