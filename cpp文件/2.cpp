// 2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#define Pi 3.14
int main()
{
	double r, h;
	double volume;
	cout << "请输入圆锥的半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >>h;
	volume =  (1.0 / 3) * Pi * r*r * h;
	cout << "圆锥的体积为：" << volume<<endl;
	cout << "double length" <<" "<< sizeof(double) << endl;
}

