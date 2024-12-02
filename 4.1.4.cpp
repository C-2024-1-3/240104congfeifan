#include<iostream>
#include<algorithm>
#define maxn 80
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)list3[i] = list1[i];
	for (int i = 0; i < size2; i++)list3[size1 + i] = list2[i];
	sort(list3, list3 + size1 + size2);
}
int list1[maxn]; int list2[maxn]; int list3[maxn];
int main()
{
	int m = 0, n = 0;
	cout << "Enter list1: ";
	while (cin >> list1[m++] && cin.get() != '\n');
	cout << "Enter list2: ";
	while (cin >> list2[n++] && cin.get() != '\n');
	merge(list1, m, list2, n, list3);
	cout << "The merged list is ";
	for (int i = 0; i < (m + n); i++)cout << list3[i] << " ";
	return 0;
}
