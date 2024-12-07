#include <iostream>
using namespace std;
void sortArray(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
}

int main() {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;
    int* array = new int[size];

    cout << "请输入数组元素: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    sortArray(array, size);
    cout << "排序后的数组元素为: ";
    printArray(array, size);
    cout << endl;
    delete[] array;

    return 0;
}