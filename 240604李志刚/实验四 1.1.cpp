#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int c = 0;
	for (int a = 0; a < 10; a++)
	{
		for (int b =0; b <a ; b++)
		{
			if (arr[a] == arr[b]) { c = 1; break; }
		}
		if(c==0)
		cout << arr[a] << " ";
		c = 0;
	}
}