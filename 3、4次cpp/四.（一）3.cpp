#include <iostream>
using namespace std;

int main3() {
    const int numLockers = 100;
    bool lockers[numLockers] = { false }; 
    for (int student = 1; student <= numLockers; ++student) {
        for (int locker = student; locker <= numLockers; locker += student) {
            lockers[locker - 1] = !lockers[locker - 1]; 
        }
    }
    cout << "开着的存物柜号码为：";
    for (int i = 0; i < numLockers; ++i) {
        if (lockers[i]) {
            cout << i + 1 << " "; 
        }
    }
    cout << endl;

    return 0;
}