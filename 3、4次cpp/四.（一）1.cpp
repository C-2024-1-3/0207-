#include <iostream>
using namespace std;

int main1() {
    const int max_num = 100;
    bool arrSeen[max_num] = { false };
    int arrNum[10];
    int uniqueCount = 0;

    cout << "请输入10个整数（0-99之间）：" << endl;
    for (int i = 0; i < 10; ++i) {
        int inputNum;
        cin >> inputNum;
        if (!arrSeen[inputNum]) {
            arrSeen[inputNum] = true;
            arrNum[uniqueCount++] = inputNum;
        }
    }
    cout << "不重复的数字有：" << endl;
    for (int i = 0; i < uniqueCount; ++i) {
        cout << arrNum[i] << " ";
    }
    cout << endl;

    return 0;
}