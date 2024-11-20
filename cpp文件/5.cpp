

#include <iostream>
    using namespace std;

    int main() {
        double fahrenheit;
        cout << "输入华氏温度: ";
        cin >> fahrenheit;

        double celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << "摄氏温度: " << celsius << endl;

        system("pause");
        return 0;
    }


