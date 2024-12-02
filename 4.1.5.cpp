﻿#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; i++) 
    {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j]) j++;
        if (j == len1) return i;
    }
    return -1;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);
    cout << "Enter the second string:  ";
    cin.getline(s2, 100);
    int index = indexOf(s1, s2);
    cout << "indexOf(“"<<s1<<"”, “" << s2<<"”) is " << index << endl;
    return 0;
}