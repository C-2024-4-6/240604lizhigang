#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	int fah = 0, cel = 0;
	
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> fah;
	cout << "��Ӧ�������¶�Ϊ��" << fahrenheit_to_cel(fah) << endl;
	
	cout<< "�����������¶ȣ�" << endl;
	cin >> cel;
	cout << "��Ӧ�Ļ����¶�Ϊ��" << celsius_to_fah(cel) << endl;
}
