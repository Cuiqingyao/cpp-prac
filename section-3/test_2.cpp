// 第二题，BMI(Body Mass Index, 体重指数)计算
#include <iostream>
using namespace std;
int main()
{
    int user_feet;
    int user_inch;
    int user_weight;
    const int cf_feet_to_inch = 12.0;
    const double cf_inch_to_meter = 0.0254;
    const double cf_kg_to_pounds = 2.2;

    cout << "请输入用户的身高（英尺部分）:__\b\b";
    cin >> user_feet;
    cout << "请输入用户的身高（英寸部分）:__\b\b";
    cin >> user_inch;
    cout << "请输入用户的体重（磅）:__\b\b";
    cin >> user_weight;
    double bmi = (user_feet * cf_feet_to_inch + user_inch) * cf_inch_to_meter / ( user_weight / cf_kg_to_pounds );
    cout << "您的BMI指数为：" << bmi << endl;
}