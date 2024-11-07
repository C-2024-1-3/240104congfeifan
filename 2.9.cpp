#include <iostream>
using namespace std;
#define price 0.8
int main()
{
	double sum=2, d=2,money = 0,days = 0;
	while (sum<=100)
	{
		days++;
		money += d * price;
		d *= 2;
		sum += d;
	}
	cout << "每天平均花" << money / days << endl;
	return 0;
}
