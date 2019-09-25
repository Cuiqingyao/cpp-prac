// 第五题，人口占比
#include <iostream>
using namespace std;
int main()
{
    long long country_ps;
    long long global_ps;
    cout <<"请输入国家的人口：";
    cin >> country_ps;
    cout << "请输入全球人口：";
    cin >> global_ps;
    cout << "人口占比：" << 100 * double(country_ps)/double(global_ps) << "%" << endl;
}