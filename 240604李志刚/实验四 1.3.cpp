#include<iostream>
using namespace std;
bool change(bool l)
{
	if (l == 0)
		return 1;
	if(l==1)
		return 0;
}
int main()
{
	bool L[101] = { 0 };
	
	for (int i = 1; i <= 100; i++)
	{
		for (int a = 1; a * i <=100; a++)
		{
			L[a*i]=change(L[a * i]);
		}
		
	}
	for(int i=1;i<=100;i++)
	if(L[i]==1) cout << i << " ";
}