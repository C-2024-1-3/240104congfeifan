#include<iostream>
#include<iomanip>
using namespace std;
float FtoC(float F)
{
	float C;
	C = (F - 32)/1.8;
	return C;
}
int main()
{
	float C, F;
	cout << "请输入华氏度" << endl;
	cin >> F;
	C = FtoC(F);
	cout << fixed << setprecision(2);
	cout << "转换为摄氏度" << C << endl;
	return 0;
}