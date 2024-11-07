#include <iostream>
using namespace std;
int mp[10] = { 0 };//1：中英文字母2：空格3：数字字符4：其它字符
int main()
{
	char p;
	while (p = getchar())
	{
		if (p == '\n')break;
		if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z'))mp[1]++;
		else if (p == ' ')mp[2]++;
		else if (p >= '0' && p <= '9')mp[3]++;
		else mp[4]++;
	}
	cout << "中英文字母数量" << mp[1] << " 空格数量" << mp[2] << " 数字字符数量" << mp[3] << " 其他字符数量" << mp[4] << endl;
	return 0;
}