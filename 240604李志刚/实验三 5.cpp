#include<iostream>
using namespace std;
int tao(int n)
{
	if (n == 1)
		return 1;
	else
		return (tao(n - 1) + 1) * 2;
}
int main()
{
	int a = 0;
	cout << "��������ӳ��˼��죺" << endl;
	cin >> a;
	cout << "���ӵ�һ��ժ��" << tao(a) << "������" << endl;
}