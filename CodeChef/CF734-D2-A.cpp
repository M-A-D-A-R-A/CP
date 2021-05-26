//Anton adn Danik
// CF724-D2-A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, c1 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            c++;
        else
            c1++;
    }
    if (c > c1)
        cout << "Anton" << endl;
    else if (c1 > c)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}