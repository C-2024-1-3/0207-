#include <iostream>
using namespace std;

double sqrtIterative(double a, double tolerance = 1e-5, int maxIterations = 10000) {
    if (a < 0) {
        cout << "错误: 无法计算负数的平方根。" << endl;
        return -1;
    }

    
    double x_n = a;
    double x_next = 0.0;

    
    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        x_next = 0.5 * (x_n + a / x_n); 
        if (abs(x_next - x_n) < tolerance) {
            return x_next; 
        }
        x_n = x_next;
    }

   
}

int main() {
    double a;
    cout << "请输入一个数字以计算其平方根：";
    cin >> a;

    double tolerance;
    cout << "请输入精度（例如，1e-5 表示 10^-5）：";
    cin >> tolerance;

   
    if (tolerance <= 0) {
        cerr << "Error: 精度必须为正数。" << endl;
        return 1; 
    }

    
    double result = sqrtIterative(a, tolerance);
    cout << a << " 的平方根约为 " << result << endl;

    return 0; 
}