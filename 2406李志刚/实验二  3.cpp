#include<iostream>
using namespace std;
int main()
{
	double a = 0, b = 0, c = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b ==c || a == c)
		{
			cout << "三角形为等腰三角形" << endl;
		}
		cout << "周长为" << a + b + c << endl;
	}
	else
	{
		cout << "您输入的数值不能构成三角形" << endl;
	}

}