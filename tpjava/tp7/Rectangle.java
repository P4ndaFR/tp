import java.awt.*;

public class Rectangle extends Forme
{
	int hauteur,largeur;
	public Rectangle(Point centre,int x,int y)
	{
		super(centre);
		this.hauteur = y;
		this.largeur = x;
	}

	public int getPerimetre()
	{
		return 2 * (largeur + hauteur);
	}

	public void affiche()
	{
		System.out.println("hauteur = " + hauteur + "largeur = " + largeur + "centre (" + centre.getX() +" ; "+ centre.getY() ")" );
	}
}