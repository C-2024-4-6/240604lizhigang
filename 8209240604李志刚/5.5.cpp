#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p;
    p.display();
    int a, b;
    cout << "请输入需要改变的横坐标值" << endl;
    cin >> a;
    cout << "请输入需要改变的纵坐标值" << endl;
    cin >> b;
    p.setPoint(a, b);
    p.display();
    return 0;
}