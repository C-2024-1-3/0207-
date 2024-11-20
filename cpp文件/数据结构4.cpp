#include <iostream>
    using namespace std;
    int main()
    {
        char operatorChar;
        double num1, num2;
        double result;
        cout << "请输入运算符（+ - * / %）：";
        cin >> operatorChar;
        cout << "请输入两个操作数：";
        cin >> num1 >> num2;
            switch (operatorChar) {
            case '+':
                result = num1 + num2;
                cout << "结果是：" << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "结果是：" << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "结果是：" << result << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "除数不能为零！" << endl;
                }
                else {
                    result = num1 / num2;
                    cout << "结果是：" << result << endl;
                }
                    break;
            case '%':
                if (num2 == 0 ){
                    cout << "除数不能为零" << endl;
                }
                else {
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "结果是：" << result << endl;
                }
                    break;
                
            default:
                cout << "无效的运算符！" << endl;
            }
           
        }
        
            
  
       
    
