import java.util.*;

public class Principal
{
	public static void main(String []args)
	{
		//		Test Objet Question 	[OK]
		/* 
		Question q = new Question("Quelle est la taille de l'afrique ?");
		System.out.println(q.getQuestion());
		q.setQuestion("##########################");
		System.out.println(q.getQuestion());
		*/
		Vector<QuestionReponse> tab = new Vector<QuestionReponse>();

		QuestionReponse q1 = new QuestionReponse("Test 1","1","2","3","4",1);
		QuestionReponse q2 = new QuestionReponse("Test 2","1","2","3","4",1);
		QuestionReponse q3 = new QuestionReponse("Test 3","1","2","3","4",1);

		tab.add(q1);
		tab.add(q2);
		tab.add(q3);


		//Test 1 Fenetre 			[OK]
		Interface i = new Interface(tab);
		

	}
}