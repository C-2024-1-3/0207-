// 三.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void gcdAndlcm(int a, int b, int& gcdResult, int& lcmResult)
{
    gcdResult = gcd(a, b);
    lcmResult = (a * b) / gcdResult;
}

int main1() {
    int m, n;
    cout << "请输入两个自然数m和n: ";
    cin >> m >> n;
    int numgcd, numlcm;
    gcdAndlcm(m, n, numgcd, numlcm);
    cout << "最大公约数: " << numgcd << endl;
    cout << "最小公倍数: " << numlcm << endl;

    return 0;
}
