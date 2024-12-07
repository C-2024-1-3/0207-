#include <iostream>
using namespace std;

void bubbleSort(double arr[], int size) {
    bool changed=true;
    do {
        changed = false;
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main2() {
    const int listSize = 10;
    double numbers[listSize];
    cout << "������10��˫���ȸ�������" << endl;
    for (int i = 0; i < listSize; ++i) {
        cin >> numbers[i];
    }
    bubbleSort(numbers, listSize);
    cout << "����������Ϊ��" << endl;
    for (int i = 0; i < listSize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}