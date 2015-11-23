import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class InterfaceBDD extends JFrame implements ActionListener
{
	private JList jlist;
	private JButton but_dep;
	private JButton but_ret;
	private JButton but_maj;
	private JButton but_esc;
	private ArrayList<ElementBDD> list;
	private String article;

	public InterfaceBDD()
	{
		super();
		GestionBDD gestion = new GestionBDD();
		list = gestion.getList();
		this.creerInterface();
	}

	public void creerInterface()
	{
		
		this.setExtendedState(JFrame.MAXIMIZED_BOTH);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setVisible(true);
		this.setTitle("InterfaceBDD");

		JLabel titre = new JLabel("Articles - quantité");
		getContentPane().add(titre, BorderLayout.NORTH);
		this.jlist = new JList();
		getContentPane().add(jlist, BorderLayout.CENTER);
		JPanel p = new JPanel();
		this.but_dep = new JButton("Dépot");
		p.add(but_dep);
		but_dep.addActionListener(this);
		this.but_ret = new JButton("Retrait");
		p.add(but_ret);
		but_ret.addActionListener(this);
		this.but_maj = new JButton("Mise à jour");
		p.add(but_maj);
		but_maj.addActionListener(this);
		this.but_esc = new JButton("Quitter");
		p.add(but_esc);
		but_esc.addActionListener(this);
		getContentPane().add(p, BorderLayout.SOUTH);
		this.pack();
		jlist.setListData(list.toArray());
	}

	public void actionPerformed(ActionEvent e)
	{
		if( e.getSource() == but_dep )
		{
			ElementBDD tmp = (ElementBDD)jlist.getSelectedValue();
			gestion.retirerArticle(tmp.getNom());
			gestion.listerArticles();
		}
	}
}