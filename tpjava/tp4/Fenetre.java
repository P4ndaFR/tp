import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Fenetre extends JFrame implements ActionListener	
{

	private JButton bouton;
	private JButton bouton2;
	private JLabel label;

	// Hauteur et Largeur en pxs
	public Fenetre ()
	{
		super("Serveur");
		//this.setSize(hauteur,largeur);
		this.setExtendedState(JFrame.MAXIMIZED_BOTH); //Fullscreen
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setVisible(true);
		this.setTitle("Window");

		label = new JLabel("Bonjour !");

		Container c = this.getContentPane();
		c.add(label,BorderLayout.CENTER);

		//bouton.addActionListener(this);
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
