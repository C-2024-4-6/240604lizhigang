#include<iostream>

using namespace std;
bool is_prime(int num)
{
	if (num <= 1) return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main() 
{
	int n, a = 0;
	for (int i = 1; a < 200; i++) 
	{
		if (is_prime(i) == 1) 
		{
			cout << i << " ";
			a++;
			if (a % 10 == 0)
				cout << endl;

		}
	}
	return 0;
}