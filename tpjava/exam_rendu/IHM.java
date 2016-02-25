import java.awt.event.*;
import javax.swing.*;
import java.lang.Object.*;
import java.awt.*;

/* Classe Interface utilisateur
*@author Antoine Blondeau
*@see JFrame
*@see ActionListener
*/
public class IHM extends JFrame implements ActionListener
{
	private JPanel ensemble,noms,scores,action,selection,menu;
	private JLabel nom1,nom2,vs,nom3,imageAction1,vs2,imageAction2,nom4;
	private JButton bPierre,bPapier,bCiseaux,reset,exit;
	private JTextField score1,score2;
	private ImageIcon pierre,papier,ciseaux,vierge;
	private int iascore,pscore;
  	private PPC ppc;
	

	/*Constructeur de L'IHM 
	*@author Antoine Blondeau$
	*@see JFrame
	*@see BoxLayout
	*@see ActionListener
	*/
	public IHM()
	{
		super("Pierre Feuille Ciseaux");
		this.setSize(1000,350);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);

		ppc = new PPC();
      	iascore = pscore = 0;

		ensemble = new JPanel();
		BoxLayout bl = new BoxLayout(ensemble,BoxLayout.Y_AXIS);
		ensemble.setLayout(bl);

		noms = new JPanel();
		BoxLayout bl2 = new BoxLayout(noms,BoxLayout.X_AXIS);
		noms.setLayout(bl2);

		scores = new JPanel();
		BoxLayout bl3 = new BoxLayout(scores,BoxLayout.X_AXIS);
		scores.setLayout(bl3);

		action = new JPanel();
		BoxLayout bl4 = new BoxLayout(action,BoxLayout.X_AXIS);
		action.setLayout(bl4);

		selection = new JPanel();
		BoxLayout bl5 = new BoxLayout(selection,BoxLayout.X_AXIS);
		selection.setLayout(bl5);

		menu = new JPanel();
		BoxLayout bl6 = new BoxLayout(menu,BoxLayout.X_AXIS);
		menu.setLayout(bl6);

		vierge = new ImageIcon("images/vierge.jpg");
		pierre = new ImageIcon("images/pierre.jpg");
		papier = new ImageIcon("images/papier.jpg");
		ciseaux = new ImageIcon("images/ciseaux.jpg");

		nom1 = new JLabel("Votre Score");
		nom2 = new JLabel("Score de l'IA");
		vs   = new JLabel("                              VS                              ");
		nom3 = new JLabel("Vous");
		nom4 = new JLabel("IA");
		vs2  = new JLabel("   VS   ");
		imageAction1   = new JLabel(vierge);
		imageAction2   = new JLabel(vierge);

		score1 = new JTextField("" + pscore);
		score2 = new JTextField("" + iascore);

		bPierre = new JButton(pierre);
		bPapier = new JButton(papier);
		bCiseaux = new JButton(ciseaux);
		reset = new JButton("Reset");
		exit = new JButton("Exit");


		noms.add(nom1);
		noms.add(vs);
		noms.add(nom2);

		scores.add(score1);
		scores.add(score2);
		score1.setEditable(false);
		score2.setEditable(false);

		action.add(nom3);
		action.add(imageAction1);
		action.add(vs2);
		action.add(imageAction2);
		action.add(nom4);

		selection.add(bPierre);
		selection.add(bPapier);
		selection.add(bCiseaux);

		menu.add(reset);
		menu.add(exit);

		ensemble.add(noms);
		ensemble.add(scores);
		ensemble.add(action);
		ensemble.add(selection);
		ensemble.add(menu);

		bPierre.addActionListener(this);
		bPapier.addActionListener(this);
		bCiseaux.addActionListener(this);
		reset.addActionListener(this);
		exit.addActionListener(this);

		this.setContentPane(ensemble);

		this.setVisible(true);
		this.setLocationRelativeTo(null);

	}

	/*Classe de traitement des évenement
	*@param e objet Evénement
	*@see ActionListener
	*@author Arnaud Prémel-Cabic
	*@author Antoine Blondeau
	*/
	public void actionPerformed( ActionEvent e)
	{
		int tmp = 0;
		if(e.getSource() == bPierre)
		{
			tmp = ppc.duel(1);
			if(ppc.getIAChoix() == 2)
			{
				imageAction2.setIcon(pierre);
			}
			if(ppc.getIAChoix() == 1)
			{
				imageAction2.setIcon(papier);
			}
			if(ppc.getIAChoix() == 3)
			{
				imageAction2.setIcon(ciseaux);
			}
			imageAction1.setIcon(papier);
		}
		if(e.getSource() == bPapier)
		{
			tmp = ppc.duel(2);
			if(ppc.getIAChoix() == 2)
			{
				imageAction2.setIcon(pierre);
			}
			if(ppc.getIAChoix() == 1)
			{
				imageAction2.setIcon(papier);
			}
			if(ppc.getIAChoix() == 3)
			{
				imageAction2.setIcon(ciseaux);
			}
			imageAction1.setIcon(pierre);
		}
		if(e.getSource() == bCiseaux)
		{
			tmp = ppc.duel(3);
			if(ppc.getIAChoix() == 2)
			{
				imageAction2.setIcon(pierre);
			}
			if(ppc.getIAChoix() == 1)
			{
				imageAction2.setIcon(papier);
			}
			if(ppc.getIAChoix() == 3)
			{
				imageAction2.setIcon(ciseaux);
			}
			imageAction1.setIcon(ciseaux);
		}
		
		if(e.getSource() == exit)
		{
			System.exit(1);
		}
		    if (tmp<0)
     		{
         		iascore=iascore + 1;
        		score2.setText("" + iascore);
        		ensemble.setBackground(Color.RED);
				noms.setBackground(Color.RED);
				scores.setBackground(Color.RED);
				action.setBackground(Color.RED);
				selection.setBackground(Color.RED);
				menu.setBackground(Color.RED);
      		}
      		if (tmp>0)
      		{
        		pscore=pscore + 1;
        		score1.setText("" + pscore);
        		ensemble.setBackground(Color.GREEN);
				noms.setBackground(Color.GREEN);
				scores.setBackground(Color.GREEN);
				action.setBackground(Color.GREEN);
				selection.setBackground(Color.GREEN);
				menu.setBackground(Color.GREEN);
    		}
   			if (tmp==0)
    		{
        		ensemble.setBackground(Color.WHITE);
				noms.setBackground(Color.WHITE);
				scores.setBackground(Color.WHITE);
				action.setBackground(Color.WHITE);
				selection.setBackground(Color.WHITE);
				menu.setBackground(Color.WHITE);      
	  		}
	  		if(e.getSource() == reset)
		{
			score1.setText("");
			score2.setText("");
			imageAction1.setIcon(vierge);
			imageAction2.setIcon(vierge);

			ensemble.setBackground(null);
			noms.setBackground(null);
			scores.setBackground(null);
			action.setBackground(null);
			selection.setBackground(null);
			menu.setBackground(null);
		}
	}
}