#include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	for (int i = 3; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
		return true;
}
int main2()
{
	int arr[200];
	int count = 0;
	int num = 2;
	while (count < 200)
	{
		if (is_prime(num))
		{
			 arr[count] = num ;
			 count++;
		}
		num++;
	}

	for (int i = 0; i < 200; i++)
	{
		cout << arr[i] << ((i + 1) % 10 == 0 ? '\n' : '\t');
	}
	cout << endl; 
	return 0;
}