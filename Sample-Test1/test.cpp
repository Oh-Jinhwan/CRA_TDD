#include "pch.h"
#include <vector>
#include "../CRA_TDD/fibo.cpp"
#include "../CRA_TDD/account.cpp"
using namespace std;

TEST(TestCaseName, TestName) {
	vector<vector<int>> cases = { {0,0},{1,1},{2,1},{3,2},{4,3},{5,5},{6,8},{7,13},{8,21} };

	for(int i = 0; i < cases.size(); i++)
	{
		int input = cases[i][0];
		int expected = cases[i][1];
		EXPECT_EQ(expected, Fibo().fibo(input));
	}
}

class AccoutFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccoutFixture, CreateAccountInit10000won)
{
	EXPECT_EQ(account.getBanlance(), 10000);
}

TEST_F(AccoutFixture, Deposit)
{
	account.deposit(500);
	EXPECT_EQ(account.getBanlance(), 10500);
}

TEST_F(AccoutFixture, Withdraw)
{
	account.withdraw(600);
	EXPECT_EQ(account.getBanlance(), 9400);
}