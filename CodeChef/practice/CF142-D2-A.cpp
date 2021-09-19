#include <bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pii <pair<int,int>
#define vi vector<int>
// #define vp vector <pair<int,int>>
#define vpp vector<pair<pair<int, int>, int>>
#define si set<int>
#define ll long long
#define ld long double
#define pb push_back
#define fo(i, n) for (i = 0; i < n; i++)
#define pqf priority_queue<int, vector<int>>
#define pqb priority_queue<int, vector<int>, greater<int>>
#define ps(x, y) fixed << setprecision(y) << x
#define MOD 1e9
#define PI 3.1415926535

bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.first == p2.first)
        return p1.second > p2.second;
    return p1.first < p2.first;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve()
{
    ll n, s;
    cin >> s >> n;
    ll flag = 0;
    // vector<pair<ll,ll>> vp;
    vector<pair<ll, ll>> vp;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        vp.pb({x, y});
    }
    ll i;
    sort(vp.begin(), vp.end(), compare);
    fo(i, n)
    {
        if (s > vp[i].first)
            s = s + vp[i].second;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}

int main()
{
    IOS
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
    solve();
    return 0;
}