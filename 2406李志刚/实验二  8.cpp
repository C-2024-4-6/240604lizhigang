#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "请输入一个数：" << endl;
	cin >> a;
	c = a;
	do {
		b = 0.5 * (c + (a / c));
		if (b > c)
			d = b - c;
		else d = c - b;
		c = b;

	} while (d >= 1e-5);
	cout << c;
}