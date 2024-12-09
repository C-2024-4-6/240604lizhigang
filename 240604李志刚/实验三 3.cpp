#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	int fah = 0, cel = 0;
	
	cout << "请输入华氏温度：" << endl;
	cin >> fah;
	cout << "对应的摄氏温度为：" << fahrenheit_to_cel(fah) << endl;
	
	cout<< "请输入摄氏温度：" << endl;
	cin >> cel;
	cout << "对应的华氏温度为：" << celsius_to_fah(cel) << endl;
}
