#include <iostream>
using namespace std;
int main()
{
    double x=0.0; double y = 0.0;
    cout << "输入x的值" << endl;
    cin >> x;
    if (x>0&&x<= 10)
    {
        if (x>0&&x< 1) {
            y = 3 - 2 * x;
            cout << "y=" << y << endl;
        }
        else if (1 <= x&&x < 5) {
            y = 2 / (4 * x) + 1;
            cout << "y=" << y << endl;
        }
        else {
            y = x * x;
            cout << "y=" << y << endl;
        }
    
    }
    else {
        cout << "不在计算范围内" << endl;
    }
    return 0;
}