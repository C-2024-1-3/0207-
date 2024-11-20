#include <iostream>
using namespace std;
int main()
{
	int a=0, b=0, c=0;
	int l;
	cout << "请输入边长a b c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		l = a + b + c;
		cout << "周长为：" << l << endl;
		if (a==b || a ==c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;

		}
		else { cout << "该三角形不是等腰三角形" << endl; }
	}
	else { cout << "不构成三角形" << endl; }
	return 0;
}
