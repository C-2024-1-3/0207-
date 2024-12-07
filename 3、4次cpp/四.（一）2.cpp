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
    cout << "请输入10个双精度浮点数：" << endl;
    for (int i = 0; i < listSize; ++i) {
        cin >> numbers[i];
    }
    bubbleSort(numbers, listSize);
    cout << "排序后的数字为：" << endl;
    for (int i = 0; i < listSize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}