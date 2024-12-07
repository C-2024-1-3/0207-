#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    const char* ptr = s;
    while (*ptr != '\0') {
        char ch = (*ptr >= 'A' && *ptr <= 'Z') ? (*ptr + 32) : *ptr;
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
        ++ptr;
    }
}

int main() {
    const int alphabet_size = 26;
    char inputString_max[1000]; 
    int letterCounts[alphabet_size] = { 0 }; 
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®: ";
    cin.getline(inputString_max, sizeof(inputString_max));
    count(inputString_max, letterCounts);
    for (int i = 0; i < alphabet_size; ++i) {
        if (letterCounts[i] > 0) {
            cout << (char)('a' + i) << ": " << letterCounts[i] << endl;
        }
    }

    return 0;
}