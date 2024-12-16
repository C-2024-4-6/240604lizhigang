#include <iostream>
using namespace std;

class Time             // 定义Time类
{
public:
    // 构造函数，用于初始化对象
    Time() {
        hour = 0;
        minute = 0;
        sec = 0;
    }
    // 成员函数用于设置时间
    void setTime() {
        cin >> hour;
        cin >> minute;
        cin >> sec;
    }
    // 成员函数用于输出时间
    void showTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }

private:
    int hour;
    int minute;
    int sec;
};

int main()
{
    Time t1;           // 定义t1为Time类对象
    t1.setTime();      // 通过成员函数设置时间
    t1.showTime();     // 通过成员函数输出时间
    return 0;
}