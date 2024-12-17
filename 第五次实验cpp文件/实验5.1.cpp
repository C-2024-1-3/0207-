// 实验5.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    void setTime()
    {
        cin >> hour;
        cin >> minute;
        cin >> second;
    }
    void showTime()
    {
        cout << hour << "：" << minute << "：" << second << endl;
    }
};

int main()
{
    Time t1;
    t1.setTime();
    t1.showTime();
    return 0;
}