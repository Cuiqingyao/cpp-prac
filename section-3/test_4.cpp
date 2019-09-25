// 第四题，时间转换
#include <iostream>
int main()
{
    using namespace std;
    long long seconds;
    const int hours_of_day = 24;
    const int minutes_of_hour = 60;
    const int seconds_of_minute = 60;
    cout << "请输入秒：";
    cin >> seconds;
    int final_seconds = seconds % seconds_of_minute;
    int minutes = (seconds - final_seconds) / minutes_of_hour;
    int final_minutes = minutes % minutes_of_hour;
    int hours = (minutes - final_minutes) / minutes_of_hour;
    int final_hours = hours % hours_of_day;
    int days =  seconds / (hours_of_day * minutes_of_hour * seconds_of_minute);
    cout <<seconds << "秒 = " << days <<" 天，" << final_hours <<" 时，" << final_minutes <<" 分，" << final_seconds <<" 秒"<<endl;
}