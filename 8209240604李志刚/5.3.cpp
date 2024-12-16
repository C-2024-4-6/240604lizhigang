#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;
    double width;
    double height;
public:

    void setDimensions() {
        cout << "请输入长方体的长、宽、高：";
        cin >> length >> width >> height;
    }
    double calculateVolume() {
        return length * width * height;
    }
    void displayVolume() {
        cout << "该长方体的体积是：" << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; ++i) {
        cuboids[i].setDimensions();
    }
    for (int i = 0; i < 3; ++i) {
        cuboids[i].displayVolume();
    }
    return 0;
}