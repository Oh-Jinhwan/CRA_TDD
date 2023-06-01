class Account
{
public:
	explicit  Account(int money) : balance{ money } { };
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
private :
	int balance;
};
