// 实验5.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;

class Student {
public:
    int id;
    double score;
};
void max(Student* students, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }
    cout << "最高成绩者的学号为：" << students[maxIndex].id << endl;
}
int main() {
    Student students[5] = {
        {1, 85},
        {2, 90},
        {3, 88},
        {4, 92},
        {5, 86}
    };

    max(students, 5);

    return 0;
}