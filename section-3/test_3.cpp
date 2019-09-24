// 第三题，维度转换
#include <iostream>
using namespace std;
int main()
{
    int degree;
    int minutes;
    int seconds;
    cout << "请输入度：__\b\b";
    cin >> degree;
    cout << "请输入分：__\b\b";
    cin >> minutes;
    cout << "请输入秒：__\b\b";
    cin >> seconds;
    cout << degree << "度，" << minutes << "分，" << seconds << "秒 = " << degree + double(minutes) / 60 + double(seconds) / 3600 << "度"<< endl; 
}