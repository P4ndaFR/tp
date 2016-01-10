import java.awt.*;

public abstract class Forme
{
	Point centre;

	public Forme(Point centre)
	{
		this.centre = centre;
		//System.out.println("Construction OK");
	}

	public void bougeForme(int x,int y)
	{
		centre.x = centre.x + x;
		centre.y = centre.y + y;
	}

	public abstract double getPerimetre();
}