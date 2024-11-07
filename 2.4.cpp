#include <iostream>
using namespace std;
int main()
{
	int a, b,ans;
	char op;
	cout << "请输入" << endl;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+':
	{
		ans = a + b;
		break;
	}
	case '-':
	{
		ans = a - b;
		break;
	}
	case '*':
	{
		ans = a * b;
		break;
	}
	case '/':
	{
		if (b == 0)
		{
			cout << "输入不合法" << endl;
			return 0;
		}
		ans = a / b;
		break;
	}
	case '%':
	{
		if (b == 0)
		{
			cout << "输入不合法" << endl;
			return 0;
		}
		ans = a % b;
		break;
	}
	default:
	{
		cout << "输入不合法" << endl;
		return 0;
	}
	}
	cout << "结果为" << ans;
}