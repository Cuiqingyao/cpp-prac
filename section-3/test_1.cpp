// 第一题，英寸转换为英尺和英寸
#include <iostream>
using namespace std;
int main()
{
    const int conversion_factor = 12;
    int user_inch;
    cout << "请输入你的身高（英寸）:__\b\b";
    cin >> user_inch;
    cout << "您的身高（英寸）转换为英尺为：";
    int feet = user_inch / 12;
    int remainder_inch = user_inch % 12;
    cout << feet << "英尺，" << remainder_inch << "英寸。" << endl; 
}