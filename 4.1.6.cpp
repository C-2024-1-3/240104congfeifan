#include <iostream>
using namespace std;
void count(const char s[], int counts[]) 
{
    for (int i = 0; s[i] != '\0'; i++) 
    {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
        if (ch >= 'a' && ch <= 'z') counts[ch - 'a']++;
    }
}
char str[80];
int counts[26];
int main()
{
    cout << "Enter a string: ";
    cin.getline(str, 80);
    count(str, counts);
    for (int i = 0; i < 26; i++) if (counts[i]) cout << char('a' + i) << ": " << counts[i] <<" times"<< '\n';
    return 0;
}
