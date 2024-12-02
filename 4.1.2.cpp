#include<iostream>
using namespace std;
#define listSize 10
void Bubble(double list[10]) 
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++) 
			if (list[j] > list[j + 1]) 
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
		
	} while (changed);
}

int main()
{
	double list[listSize];
	for (int i = 0; i < listSize; i++)cin >> list[i];
	Bubble(list);
	for (int i = 0; i < listSize; i++)cout << list[i] << " ";
	cout << endl;
	return 0;
}
