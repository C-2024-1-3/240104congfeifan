#include <iostream>
using namespace std;
int main()
{
	double a, x,xp;
	cin >> a;
	if (a < 0)
	{
		cout << "输入不合法" << endl;
		return 0;
	}
	if (a == 0)
	{
		cout << "其平方根为" << 0 << endl;
		return 0;
	}
	xp = x= a;
	do
	{
		xp = x;
		x = (xp + a / xp) / 2.0;
		

	} while (abs(x - xp) >= 10e-5);
	cout <<"其平方根为" << x << endl;
	return 0;
}
