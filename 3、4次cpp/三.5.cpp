#include <iostream>
using namespace std;
int recursion(int day)
{
	if (day == 10)
	{
		return 1;
	}
	else
	{
		return(recursion(day + 1) + 1) * 2;
	}
}
int main()
{
	int firstcount=recursion(1);
	cout << "��һ����������Ϊ��" << firstcount << endl;
	return 0;
}