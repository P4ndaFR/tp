public class Loan
{
	private Double m_payment,m_interest,p_amount;
	private Integer m_number;

	public Loan(Double p_amount,Integer m_number,Double m_interest)
	{
		this.m_interest = m_interest/(1200);
		this.p_amount = p_amount;
		this.m_number = m_number*12;
	}

	public Double M_payment_Calculation()
	{
		return p_amount*(m_interest / ( 1 - Math.pow( ( 1 + m_interest ), -m_number ) ) );
	}
}