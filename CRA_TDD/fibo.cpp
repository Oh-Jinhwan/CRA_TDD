class Fibo
{
public:
	int fibo(int input)
	{
		if (input == 0) return 0;
		if (input == 1) return 1;
		return fibo(input - 2) + fibo(input - 1);
	}
};