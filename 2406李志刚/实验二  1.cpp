#include<iostream>
using namespace std;
int main()
{
	char cha=0;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> cha;
	if (cha >= 'a' && cha <= 'z')
	{
		cha -= 32;
		cout << static_cast<char>(cha) << endl;
	}
	else
	{
		cha += 1;
		cout << static_cast<int>(cha) << endl;
	}
}