#include <iostream>
using namespace std;
#include "mytriangle.h"

int main3() {
    double side1, side2, side3;

    cout << "�������������߳�: " << endl;
    cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double area = calculate_area(side1, side2, side3);
        if (area != -1.0) { 
            cout << "���������Ϊ�� " << area <<endl;
        }
    }
    else {
        cout << "����: ������������." << endl;
    }

    return 0;
}