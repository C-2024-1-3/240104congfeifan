#include <iostream>
using namespace std;
bool is_prime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) if (num % i == 0) return false;
    return true;
}
int main() 
{
    int count = 1;
    for (int num = 2; count <= 200; ++num) 
    {
        if (is_prime(num)) 
        {
            cout << num << (count % 10 == 0?'\n':'\t');
            count++;
        }
    }
    return 0;
}
