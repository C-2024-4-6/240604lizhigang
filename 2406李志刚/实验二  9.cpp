#include<iostream>
using namespace std;
int main()
{
	int apple = 2, day = 0;
	double money = 0;
	while (apple <= 100)
	{

		money += apple * 0.8;
		apple *= 2;
		day++;


	}
	double averagemoney = money / day;
	cout << averagemoney << endl;

}