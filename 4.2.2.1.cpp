#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int n = strlen(s1), m = strlen(s2);
	int ans = -1, temp = -1;
	for (int i = 0, j = 0; i < m; i++)
	{
		if (s2[i] != s1[j])
		{
			temp = -1;
			j = 0;
		}
		if (s2[i] == s1[j])
		{
			if (!(temp + 1))temp = i;
			j++;
			if (j == n)
			{
				ans = temp;
				break;
			}
		}

	}

	return ans;
}
int main()
{
	string a, b;
	cin >> a >> b;
	cout << indexof(&a[0], &b[0]);
}