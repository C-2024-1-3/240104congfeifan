#include <iostream>
using namespace std;
float func(float x)
{
	if (x <= 0||x>=10)return -1;
	if (x < 1)return (3 - 2*x);
	if (x < 5)return (2.0 / (4.0 * x) + 1);
	if (x < 10)return x * x;
}
int main()
{
	float p;
	while (cin >> p)cout << func(p) << endl;
	return 0;
}