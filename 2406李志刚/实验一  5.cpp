#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int f = 0;
	double c = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> f;
	c = (f -static_cast<double>( 32)) * 9 / 5;
	cout << "���õ��������¶�Ϊ��" <<fixed<<setprecision(2)<< c << endl;
}