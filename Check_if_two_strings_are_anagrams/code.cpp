#include <bits/stdc++.h>
bool isAnagram(string str1, string str2)
{
    //Write your code here
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1==str2;
}