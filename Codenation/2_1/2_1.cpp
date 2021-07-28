//Ashish ka Code

#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pii <pair<int,int>
#define vi vector <int>
#define vp vector <pair<int,int>>
#define vpp vector <pair<pair<int,int>,int>>
#define si set<int>
#define ll long long
#define ld long double
#define pqf priority_queue <int,vector <int>> 
#define pqb priority_queue <int,vector <int>,greater<int>> 
#define ps(x,y) fixed << setprecision(y) << x
#define MOD 1e9
#define PI 3.1415926535

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve()
{
    int k;
    string str;
    cin >> k;
    cin >> str;
    int l = str.length();
    vector<int> arr;
    for (int i = 0; i < l - 1; i++)
    {
        if (str[i] < str[i + 1])
        {
            str.erase(i, 1);
            k--;
            l--;
            if(i != 0) {
                i -= 2;
            } else {
                i--;
            }
        }
        if (k == 0)
        {
            break;
        }
    }

    // if (k != 0)
    // {
    //     for (size_t i = 0; i < l; i++)
    //     {
    //         arr.push_back(str[i]);
    //     }

    //     sort(arr.begin(), arr.end());
    //     for (size_t i = 0; i < k; i++)
    //     {
    //         int a = str.find((char)arr[i]);
    //         str.erase(a, 1);
    //     }
    // }

    str.erase(l-k);

    cout << str + '\n';
}

int main()
{
    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
