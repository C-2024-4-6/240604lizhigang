
#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;
    double result;

  
   cout << "�������һ������: ";
    cin >> num1;
    cout << "����������� (+, -, *, /): ";
    cin >> op;
    cout << "������ڶ�������: ";
    cin >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "�����: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "�����: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "�����: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "�����: " << result << endl;
        }
        else {
            cout << "���󣺳�������Ϊ0��" << endl;
        }
        break;
    default:
        cout << "������Ч���������" << endl;
    }

    return 0;
}
