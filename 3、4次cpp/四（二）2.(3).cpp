#include <iostream>
using namespace std;

int indexOf(const char* s1, const char* s2) {
    if (*s2 == '\0') {
        return 0;
    }

    const char* p1 = s1;
    const char* tempP1;
    const char* p2 = s2;
    while (*p1 != '\0') {
        p2 = s2;
        tempP1 = p1;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return tempP1 - s1; 
        }
        p1++; 
    }
    return -1; 
}

int main5() {
    char s1[100];
    char s2[100];
    cout << "�������ַ���s1: ";
    cin.getline(s1, sizeof(s1));
    cout << "�������ַ���s2: ";
    cin.getline(s2, sizeof(s2));
    int index = indexOf(s1, s2);
    if (index != -1) {
        cout << "�ַ���s2��s1���Ӵ�����һ��ƥ����±���: " << index << endl;
    }
    else {
        cout << "�ַ���s2����s1���Ӵ���" << endl;
    }
    return 0;
}