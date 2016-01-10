import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Fenetre extends JFrame implements ActionListener
{
	private JButton b1;
	private JButton b2;
	private JTextField t1,t2,t3,t4;
	private JLabel l1,l2,l3,l4;
	private JPanel pan,pan2,pan3,pan4,pan5,pan6;
	private Loan l;
	private Double res;

	public Fenetre()
	{

		//Création de la JFrame
		super("Loan Calculator");
		this.setSize(800,200);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);

		//Création du JPanel
		pan = new JPanel();
		BoxLayout bl = new BoxLayout(pan,BoxLayout.Y_AXIS);
		pan.setLayout(bl);

		pan2 = new JPanel();
		BoxLayout bl2 = new BoxLayout(pan2,BoxLayout.X_AXIS);
		pan2.setLayout(bl2);

		pan3 = new JPanel();
		BoxLayout bl3 = new BoxLayout(pan3,BoxLayout.X_AXIS);
		pan3.setLayout(bl3);

		pan4 = new JPanel();
		BoxLayout bl4 = new BoxLayout(pan4,BoxLayout.X_AXIS);
		pan4.setLayout(bl4);

		pan5 = new JPanel();
		BoxLayout bl5 = new BoxLayout(pan5,BoxLayout.X_AXIS);
		pan5.setLayout(bl5);

		pan6 = new JPanel();
		BoxLayout bl6 = new BoxLayout(pan6,BoxLayout.X_AXIS);
		pan6.setLayout(bl6);

		b1 = new JButton("Submit");
		b2 = new JButton("Reset");
		t1 = new JTextField();
		t2 = new JTextField();
		t3 = new JTextField();
		t4 = new JTextField();
		l1 = new JLabel("Amount          (€)");
		l2 = new JLabel("Months             ");
		l3 = new JLabel("Rate            (%)");
		l4 = new JLabel("Monthly Payment (€)");
		
		t4.setEditable(false);

		pan3.add(l1);
		pan3.add(t1);
		pan4.add(l2);
		pan4.add(t2);
		pan5.add(l3);
		pan5.add(t3);
		pan6.add(l4);
		pan6.add(t4);
		
		pan.add(pan3);
		pan.add(pan4);
		pan.add(pan5);
		pan.add(pan6);
		pan.add(pan2);

		pan2.add(b1);
		pan2.add(b2);

		b1.addActionListener(this);
		b2.addActionListener(this);

		this.setContentPane(pan);
		this.setVisible(true);
	}

	public void actionPerformed(ActionEvent e)
	{
		if (e.getSource()==b1)
		{
			Double tmp1,tmp3;
			Integer tmp2;

			tmp1 = Double.parseDouble(t1.getText());
			tmp2 = Integer.parseInt(t2.getText());
			tmp3 = Double.parseDouble(t3.getText());

			l = new Loan(tmp1,tmp2,tmp3);

			res = l.M_payment_Calculation();


			t4.setText("" + res);
		}
	}
}