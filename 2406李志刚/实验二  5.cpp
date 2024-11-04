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
	cout << "英文字母有" << a << "个" << endl;
	cout << "数字有" << c << "个" << endl;
	cout << "空格有" << b << "个" << endl;
	cout << "其他有" << d << "个" << endl;
}