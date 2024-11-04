
#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;
    double result;

  
   cout << "请输入第一个数字: ";
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /): ";
    cin >> op;
    cout << "请输入第二个数字: ";
    cin >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "结果是: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "结果是: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "结果是: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "结果是: " << result << endl;
        }
        else {
            cout << "错误：除数不能为0。" << endl;
        }
        break;
    default:
        cout << "错误：无效的运算符。" << endl;
    }

    return 0;
}
