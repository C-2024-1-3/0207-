// 实验5.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;

class RectangularPrism {
private:
    double length;
    double width;
    double height;

public:
    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    double calculateVolume() {
        return length * width * height;
    }
};

int main() {
    RectangularPrism prisms[3];

    for (int i = 0; i < 3; i++) {
        double length, width, height;
        cout << "请输入第" << i + 1 << "个长方柱的长：";
        cin >> length;
        cout << "请输入第" << i + 1 << "个长方柱的宽：";
        cin >> width;
        cout << "请输入第" << i + 1 << "个长方柱的高：";
        cin >> height;

        prisms[i].setDimensions(length, width, height);
    }

    for (int i = 0; i < 3; i++) {
        double volume = prisms[i].calculateVolume();
        cout << "第" << i + 1 << "个长方柱的体积为：" << volume << endl;
    }

    return 0;
}