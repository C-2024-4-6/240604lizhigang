#include<iostream>
using namespace std;
int main()
{
	double x = 0;
	cin >> x;
	if (x>0 &&x< 1)
	{
		cout << 3 - 2 * x << endl;
	}
	else if (x>=1 && x < 5)
	{
		cout << static_cast<double>(2) / 4 * x +1<< endl;
	}
	else if (x>=5 && x < 10)
	{
		cout << x * x << endl;
	}
	else
	{
		cout << "请输入范围内的数字" << endl;
	}
}