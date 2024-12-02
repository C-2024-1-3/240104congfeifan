#include <iostream>
using namespace std;
int parseHex(const std::string& hexString) 
{
    int result = 0;
    for (int i = 0; i < hexString.length(); i++) 
    {
        char ch = toupper(hexString[i]);
        result = result * 16 + ((ch >= '0' && ch <= '9')? ch - '0': ch - 'A' + 10);
    }
    return result;
}
string str;
int main() 
{
    cin >> str;
    cout << parseHex(str);
    return 0;
}