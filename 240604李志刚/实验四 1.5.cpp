#include <iostream>
using namespace std;

// 判断s1是否是s2的子串，并返回相应下标，若不是则返回 -1
int indexOf(const char s1[], const char s2[]) {
    int i = 0;  // 用于遍历s2的索引
    int s1Len = 0;
    int s2Len = 0;

    // 计算s1的长度
    while (s1[s1Len] != '\0') {
        s1Len++;
    }
    // 计算s2的长度
    while (s2[s2Len] != '\0') {
        s2Len++;
    }

    while (i <= s2Len - s1Len) {
        int j = 0;  // 用于逐个对比字符时遍历s1的索引
        while (j < s1Len) {
            if (s2[i + j] != s1[j]) {
                break;
            }
            j++;
        }
        if (j == s1Len) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    char s1[MAX_SIZE];
    char s2[MAX_SIZE];

    cout << "请输入第一个字符串: ";
    cin.getline(s1, MAX_SIZE);

    cout << "请输入第二个字符串: ";
    cin.getline(s2, MAX_SIZE);

    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << " 是 " << s2 << " 的子串，下标为: " << result << endl;
    }
    else {
        cout << s1 << " 不是 " << s2 << " 的子串" << endl;
    }

    return 0;
}