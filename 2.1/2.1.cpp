#include <iostream>
using namespace std;
int main()
{
	char p;
	cin >> p;
	if (p >= 'a' && p <= 'z')cout << char(p + 'A' - 'a') << endl;
	else cout << p + 1 << endl;
	return 0;
}