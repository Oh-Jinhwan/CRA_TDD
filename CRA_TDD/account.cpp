class Account
{
public:
	explicit  Account(int money) : balance{ money } , interest{0} { };
	int getBanlance()
	{
		return balance;
	}
	void deposit(int money)
	{
		balance += money;
	}
	void withdraw(int money)
	{
		balance -= money;
	}
	void setInterest(int interest)
	{
		this->interest = interest;
	}
	void applyInterest()
	{
		this->balance = (this->balance * (this->interest + 100)) / 100;
	}
	int getExpectedBalance(int years)
	{
		int tempBalance = this->balance;
		while ((years--) > 0)
		{
			tempBalance = (tempBalance * (interest + 100)) / 100;
		}
		return tempBalance;
	}
private :
	int balance;
	int interest;
};
