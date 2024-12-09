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
	cout << "请输入猴子吃了几天：" << endl;
	cin >> a;
	cout << "猴子第一天摘了" << tao(a) << "个桃子" << endl;
}