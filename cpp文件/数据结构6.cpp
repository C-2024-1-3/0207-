
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


int lcm(int a, int b, int gcdValue) {
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;
    cout << "请输入两个正整数：" << endl;
    cin >> num1 >> num2;
    if (num1 <= 0 || num2 <= 0) {
        cout << "请输入有效的正整数！" << endl;
        return 1;
    }
    int gcdValue = gcd(num1, num2);
    int lcmValue = lcm(num1, num2, gcdValue);
    cout << "最大公约数（GCD）为: " << gcdValue << endl;
    cout << "最小公倍数（LCM）为: " << lcmValue << endl;

    return 0;
}
    

