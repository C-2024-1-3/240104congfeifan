#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void printtime()
	{
		cout << hour << "：" <<minute << "：" << sec << endl;
	}
	Time(int hour,int minute,int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
};
int main()
{
	int hour, minute, sec;
	//输入设定的时间 
	cin >>hour; 
	cin >> minute;
	cin >> sec;
	Time t1 = Time(hour,minute,sec);           //定义t1为Time类对象
	t1.printtime();
	return 0;
}
