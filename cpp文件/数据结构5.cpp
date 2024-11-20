#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "请输入一行字符，按回车结束：" << endl;
    while (cin.get(c)) {
        if (c == '\n') {
            break; 
        }
        else if (isalpha(c)) {
            letters++; 
        }
        else if (isspace(c) && c != '\n') {
            spaces++;
        }
        else if (isdigit(c)) {
            digits++; 
        }
        else {
            others++; 
        }
    }

    cout << "英文字母个数: " << letters << endl;
    cout << "空格个数: " << spaces << endl;
    cout << "数字字符个数: " << digits << endl;
    cout << "其他字符个数: " << others << endl;

    return 0;
}