#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    const char* ptrS2 = s2; 
    while (*ptrS2 != '\0') { 
        const char* ptrS1 = s1; 
        const char* tempPtrS2 = ptrS2; 
        while (*ptrS1 != '\0' && *tempPtrS2 != '\0' && *ptrS1 == *tempPtrS2) {
            ptrS1++;
            tempPtrS2++;
        }

        if (*ptrS1 == '\0') {
            return ptrS2 - s2;
        }
        ptrS2++;
    }
    return -1;
}

int main5() {
    char s1[100];
    char s2[100];

    cout << "输入第一个字符串（字串）: ";
    cin.getline(s1, sizeof(s1));
    cout << "输入第二个字符串（父串）: ";
    cin.getline(s2, sizeof(s2));
    int index = indexOf(s1, s2);
    if (index != -1) {
        cout <<  "字符串 \"" << s1 << "\" 在字符串 \"" << s2 << "\" 中的起始索引为: " << index << endl;
    }
    else {
        cout << "字符串\"" << s1 << "\" 不是字符串 \"" << s2 << "\" 的字串 \" "<< endl;
    }

    return 0;
}