import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class Interface extends JFrame implements ActionListener
{
	private JPanel pan;
	private JPanel pan2;
	private JLabel question;
	private JButton b1;
	private JButton b2;
	private JButton b3;
	private JButton b4;
	private Vector<QuestionReponse> tab;
	
	public Interface(Vector<QuestionReponse> tab)
	{

		//Création de la JFrame
		super("Question pour un champion");
		this.setSize(800,200);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.tab = tab;

		//Création du JPanel
		pan = new JPanel();
		BoxLayout bl = new BoxLayout(pan,BoxLayout.Y_AXIS);
		pan.setLayout(bl);

		pan2 = new JPanel();
		BoxLayout bl2 = new BoxLayout(pan2,BoxLayout.X_AXIS);
		pan2.setLayout(bl2);

		question = new JLabel("###############");
		// Création des boutons
		b1 = new JButton("####");
		b2 = new JButton("####");
		b3 = new JButton("####");
		b4 = new JButton("####");

		pan.add(question);
		pan2.add(b1);
		pan2.add(b2);
		pan2.add(b3);
		pan2.add(b4);

		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);

		this.setContentPane(pan);
		pan.add(pan2);
		this.setVisible(true);
		
	}

	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == b1)
		{
			System.out.println("b1");
		}
		if(e.getSource() == b2)
		{
			System.out.println("b2");
		}
		if(e.getSource() == b3)
		{
			System.out.println("b3");
		}
		if(e.getSource() == b4)
		{
			System.out.println("b4");
		}
	}
}