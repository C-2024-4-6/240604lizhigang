#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int f = 0;
	double c = 0;
	cout << "请输入华氏温度" << endl;
	cin >> f;
	c = (f -static_cast<double>( 32)) * 9 / 5;
	cout << "您得到的摄氏温度为：" <<fixed<<setprecision(2)<< c << endl;
}