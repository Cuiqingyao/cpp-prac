// 第七题，单位转换
#include<iostream>
using namespace std;
int main()
{
    double liter_km;
    const double cf_100km_to_mile = 62.14;
    const double cf_gallon_to_liter = 3.875;

    cout << "请输入欧洲单位(升/100公里)：";
    cin >> liter_km;
    cout << "换算为美国单位(英里/加仑)：" << cf_100km_to_mile / (liter_km  / cf_gallon_to_liter) <<endl;
}