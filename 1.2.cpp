#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	float r, h;
	cout << "请输入圆锥底的半径、锥高" << endl;
	cin >> r >> h;
	float v = PI * r * r * h / 3.0f;
	cout << "圆锥的体积为" << v << endl;
	return 0;
}