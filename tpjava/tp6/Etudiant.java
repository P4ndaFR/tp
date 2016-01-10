class Etudiant extends Personne
{
	private String formation;

	public Etudiant(String nom,String prenom,String formation,int naissance)
	{
		super(nom,prenom,naissance);
		this.formation = formation;
	}

	public String getFormation()
	{
		return this.formation;
	}

	public void setFormation(String formation)
	{
		this.formation = formation;
	}

	public String toString()
	{
		return this.nom + "     " + this.prenom + "     " + this.naissance + "     " + this.formation;
	}
}