public class Age
{
	int anneeNaissance;
	int anneeActuelle;

	public Age(int anneeNaissance)
	{
		this.anneeNaissance=anneeNaissance;
		anneeActuelle = 2016;
		System.out.println(anneeNaissance);
	}
	public int calculer()
	{
		return anneeActuelle - anneeNaissance;
	}
}