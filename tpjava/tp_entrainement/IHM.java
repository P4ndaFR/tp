import javax.swing.*;
import java.awt.event.*;

public class IHM extends JFrame implements ActionListener
{
	int largeur,hauteur;
	String title;
	JButton b1,b2;
	JLabel l1;
	JTextField t1,t2;
	JPanel pan,pan2;
	Age a;

	public IHM(String title)
	{
		super(title);

		this.title=title;
		
		this.setSize(400,125);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);

		b1 = new JButton("Reset");
		b2 = new JButton("Submit");
		t1 = new JTextField("");
		t2 = new JTextField("");
		l1 = new JLabel("Entrez votre année de naissance");

		pan = new JPanel();
		BoxLayout bl = new BoxLayout(pan,BoxLayout.Y_AXIS);
		pan.setLayout(bl);

		pan2 = new JPanel();
		BoxLayout bl2 = new BoxLayout(pan2,BoxLayout.X_AXIS);
		pan2.setLayout(bl2);

		pan.add(l1);
		pan.add(t1);
		pan.add(t2);

		pan2.add(b1);
		pan2.add(b2);

		pan.add(pan2);

		t2.setEditable(false);
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		this.setContentPane(pan);
		this.setVisible(true);
		this.setLocationRelativeTo(null);
	}

	public IHM(int largeur,int hauteur,String title)
	{
		super(title);

		this.title=title;
		this.largeur = largeur;
		this.hauteur = hauteur;
		
		this.setSize(hauteur,largeur);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);

		b1 = new JButton("Reset");
		b2 = new JButton("Submit");
		t1 = new JTextField("");
		t2 = new JTextField("");
		l1 = new JLabel("Entrez votre date de naissance");

		pan = new JPanel();
		BoxLayout bl = new BoxLayout(pan,BoxLayout.Y_AXIS);
		pan.setLayout(bl);

		pan2 = new JPanel();
		BoxLayout bl2 = new BoxLayout(pan2,BoxLayout.X_AXIS);
		pan2.setLayout(bl2);

		pan.add(l1);
		pan.add(t1);
		pan.add(t2);

		pan2.add(b1);
		pan2.add(b2);

		pan.add(pan2);

		t2.setEditable(false);
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		this.setContentPane(pan);
		this.setVisible(true);
	}

	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == b1)
		{
			t1.setText("");
			t2.setText("");
		}
		if(e.getSource() == b2)
		{
			a = new Age(Integer.parseInt(t1.getText()));
			t2.setText("" + a.calculer());
		}
	}

	public String toString()
	{
		return title;
	}


}