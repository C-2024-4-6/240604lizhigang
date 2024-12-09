#include<iostream>
#include<cmath>
using namespace std;

void A(int& num1, int& num2)
{
	int gy = 0,gb=0;
	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
			gy = i;
	}
	gb = num1 * num2 / gy;
	
	cout << "最大公因数为：" <<  gy<< endl;
	cout << "最小公倍数为：" << gb << endl;
}
int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	A(a, b);
	
}