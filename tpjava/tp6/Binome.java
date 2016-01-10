import java.util.*;

public class Binome<T>
{
	private T b1, b2;

	public Binome(T b1, T b2)
	{
		this.b1 = b1;
		this.b2 = b2;
	}

	public T getPremier()
	{
		return b1;
	}

	public T getSecond()
	{
		return b2;
	}

	public String toString()
	{
		return b1 + "--" + b2;
	}
}