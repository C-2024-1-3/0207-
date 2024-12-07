#include <iostream>
using namespace std;
#include "mytriangle.h"

int main3() {
    double side1, side2, side3;

    cout << "输入三角形三边长: " << endl;
    cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double area = calculate_area(side1, side2, side3);
        if (area != -1.0) { 
            cout << "三角形面积为： " << area <<endl;
        }
    }
    else {
        cout << "错误: 不满足三角形." << endl;
    }

    return 0;
}