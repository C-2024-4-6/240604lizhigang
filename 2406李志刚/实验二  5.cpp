#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char e ;
	cin >> e;
	while(cin.get(e))
	{
		if (e == '\n')
		
			break;
		
		else if (e >= 'a' && e <= 'z' || e >= 'A' && e <= 'Z')
		{
			a++;
		}
		else if (e == ' ')
		{
			b++;
		}
		else if (e >= 0 && e <= 9)
		{
			c++;
		}
		else
		{
			d++;
		}
		
	}
	cout << "Ӣ����ĸ��" << a << "��" << endl;
	cout << "������" << c << "��" << endl;
	cout << "�ո���" << b << "��" << endl;
	cout << "������" << d << "��" << endl;
}