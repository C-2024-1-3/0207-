#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int decimalValue = 0;
    int length = 0;
    while (hexString[length] != '\0') {
        length++;
    }
    int powerOf16 = 1;
    for (int i = length - 1; i >= 0; --i)
    {
        char currentChar = hexString[i];
        int currentValue = 0;

        if (currentChar >= '0' && currentChar <= '9') {
            currentValue = currentChar - '0';
        }
        else if (currentChar >= 'A' && currentChar <= 'F') {
            currentValue = currentChar - 'A' + 10;
        }
        else if (currentChar >= 'a' && currentChar <= 'f') {
            currentValue = currentChar - 'a' + 10;
        }
        else {
            continue; 
        }
        decimalValue += currentValue * powerOf16;
        powerOf16 *= 16;
    }
    return decimalValue;
}

int main6() {
    const char* hexString = "A5";
    int decimalValue = parseHex(hexString);
    cout << "十六进制字符串的十进制值 \"" << hexString << "\" 是: " << decimalValue << endl;
    hexString = "1A3F";
    decimalValue = parseHex(hexString);
    cout << "十六进制字符串的十进制值 \"" << hexString << "\" 是: " << decimalValue << endl;

    hexString = "FFFF";
    decimalValue = parseHex(hexString);
    cout << "十六进制字符串的十进制值 \"" << hexString << "\" 是: " << decimalValue <<endl;

    return 0;
}