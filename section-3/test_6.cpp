// 第六题，里程耗油量
#include<iostream>
using namespace std;
int main()
{
    const double cf_gallon_to_liter = 3.875;
    const double cf_100km_to_mile = 62.14;

    int mile;
    int gallon;
    cout << "请输入里程（英里）：";
    cin >> mile;
    cout << "请输入耗油量（加仑）：";
    cin >> gallon;
    cout << "里程耗油量(mile/gallon)：" << double(mile)/double(gallon)<< endl;
    cout << "里程耗油量(km/liter)：" << (mile/cf_100km_to_mile)/(gallon * cf_gallon_to_liter)<< endl;
}
