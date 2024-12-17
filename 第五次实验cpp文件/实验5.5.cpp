// 实验5.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "坐标值为：(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p;
    p.display();

    p.setPoint(10, 20);
    p.display();

    return 0;
}