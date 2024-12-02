#include <iostream>
using namespace std;
bool a[101] = {false};
int main()
{
	for (int i = 1; i <= 100; i++)a[i] = true;
	for (int i = 2; i <= 100; i++)for (int j = i; j <= 100; j += i + 1)a[j] =!a[j];
	for (int i = 1; i <= 100; i++)if (a[i]) cout << i << " ";
	return 0;
}
