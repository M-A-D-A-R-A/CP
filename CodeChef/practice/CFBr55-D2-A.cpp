//Codeforces Beta Round #55 (Div. 2)
// Word

#include <bits/stdc++.h>;
using namespace std;

int main()
{
    char s[100];

    cin >> s;
    int Ucount = 0, Lcount = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
        {
            Ucount++;
        }
        else
        {
            Lcount++;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {

        if (Ucount > Lcount)
            s[i] = toupper(s[i]);
        else if (Ucount < Lcount)
            s[i] = tolower(s[i]);
        else if (Ucount = Lcount)
            s[i] = tolower(s[i]);
    }

    cout << s;
    return 0;
}