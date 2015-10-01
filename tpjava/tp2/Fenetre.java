import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Fenetre extends JFrame implements ActionListener	
{

	private JButton bouton;
	private JButton bouton2;
	private JLabel label;

	// Hauteur et Largeur en pxs
	public Fenetre (int hauteur, int largeur)
	{
		super();
		this.setSize(hauteur,largeur);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setVisible(true);
		this.setTitle("Window");

		bouton = new JButton("OK");
		bouton2 = new JButton("Test");
		label = new JLabel("Bonjour !");

		Container c = this.getContentPane();
		c.add(bouton,BorderLayout.SOUTH);
		c.add(bouton2,BorderLayout.CENTER);
		c.add(label,BorderLayout.NORTH);

		bouton.addActionListener(this);
		bouton2.addActionListener(this);
	}

	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == bouton)
		{
			System.out.println("Ok");
		}
		if(e.getSource() == bouton2)
		{
			System.out.println("Test");
		}
	}

}
