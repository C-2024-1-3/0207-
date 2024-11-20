#include <iostream>
#include <iomanip>
	using namespace std;
	int main()
	{unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl; //<<oct;
		cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast <short>(testUnint) << endl;//为什么结果为-2?:
	//65534转换为有符号短整型时，由于short通常为16位，65534超过了short能表示的最大正数（32767），因此发生溢出，结果为-2（二进制补码表示）。
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in oct unsigned int type (via cast to int first): " << oct << static_cast<int>(testUnint) << endl;
	double realNum = 95.1823;
	cout << "real number converted to int: " << static_cast<int>(realNum) << endl;

	system("pause");
	return 0;

}
   

