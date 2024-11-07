#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形三边" << endl;
	cin >> a >> b >> c;
	if (a + b + c <= 2 * max(max(a, b),c))cout << "不能构成三角形" << endl;
	else
	{
		cout << "可以构成三角形";
		if (a == b || b == c || a == c)cout << "且为等腰三角形";
		cout << "，周长为" << a + b + c << endl;
	}
	return 0;
}	