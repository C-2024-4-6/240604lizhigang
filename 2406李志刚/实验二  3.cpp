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
			cout << "������Ϊ����������" << endl;
		}
		cout << "�ܳ�Ϊ" << a + b + c << endl;
	}
	else
	{
		cout << "���������ֵ���ܹ���������" << endl;
	}

}