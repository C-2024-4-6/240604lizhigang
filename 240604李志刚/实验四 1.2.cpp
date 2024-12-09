#include<iostream>
using namespace std;
void mp()
{
	double arr[10];
	for (int a = 0; a < 10; a++)
	{
		cin >> arr[a];
	}
	int z = sizeof(arr) / sizeof(arr[0]) - 1;
	for (z; z > 0; z--)
	{
		for (int x = 0, i = 0; i < z; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				x = arr[i], arr[i] = arr[i + 1], arr[i + 1] = x;
			}
		}
	}

	for (int y = 0; y < sizeof(arr) / sizeof(arr[0]); y++)
	{
		cout << arr[y] << " ";
	}

}
int main()
{
	mp();
}