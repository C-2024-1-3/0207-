

#include <iostream>
using namespace std;

int main() {
    char inputChar;
    cout << "请输入一个字符: ";
    cin >> inputChar;
    if (inputChar >= 'a' && inputChar <= 'z') 
    {
        char upperChar = inputChar - ('a' - 'A');
        cout << "大写字母为: " << upperChar << endl;
    }
    else {
        char successorChar = inputChar + 1;
        cout << "后继字符的ASCII码值为: " << static_cast<int>(successorChar) << endl;
    }

    return 0;
}

