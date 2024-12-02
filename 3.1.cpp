#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void lcm(int a, int b, int& result) 
{
    result = (a * b) / gcd(a, b);
}

int main() 
{
    int m, n;
    cout << "��������Ȼ�� m �� n��";
    cin >> m >> n;
    int g = gcd(m, n);
    int l;
    lcm(m, n, l);
    cout << "���Լ��: " << g << '\n';
    cout << "��С������: " << l << '\n';
    return 0;
}
