//Petya and Strings
//CF112-D2-A.cpp

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    int l, k = 0;
    cin >> str1 >> str2;

    l = str1.length();

    for (int i = 0; i < l; i++)
    {
        if (str1[i] == str2[i] || abs(str1[i] - str2[i]) == 32)
            k++;
        else if (str2[i] > str1[i])
        {
            k = -1;
            break;
        }
        else
        {
            k = 1;
            break;
        }
    }

    switch (k)
    {
    case 1:
        cout << "1";
        break;
    case -1:
        cout << "-1";
    default:
        cout << "0";
        break;
    }

    return 0;
}