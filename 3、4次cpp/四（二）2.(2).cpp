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
    cout << "����������Ԫ�ظ���: ";
    cin >> size;
    int* array = new int[size];

    cout << "����������Ԫ��: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    sortArray(array, size);
    cout << "����������Ԫ��Ϊ: ";
    printArray(array, size);
    cout << endl;
    delete[] array;

    return 0;
}