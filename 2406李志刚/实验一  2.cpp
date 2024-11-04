#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r = 0, h = 0,v=0;
	cout << "请输入圆锥底的半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	v = pi * r * r * h / 3;
	cout << "圆锥的体积为:" << v << endl;
	return 0;


}