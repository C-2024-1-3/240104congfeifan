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
    cout << "请输入自然数 m 和 n：";
    cin >> m >> n;
    int g = gcd(m, n);
    int l;
    lcm(m, n, l);
    cout << "最大公约数: " << g << '\n';
    cout << "最小公倍数: " << l << '\n';
    return 0;
}
