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
#define SIZE 26

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
vector<int> printCharWithFreq(int str, int feq)
{
    // size of the string 'str'
    int n = str.size();
 
    vector<int> ans;
 
    // accumulate frequency of each character in 'str'
    for (int i = 0; i < n; i++)
        freq[str[i]]++;
 
    // traverse 'str' from left to right
    for (int i = 0; i < n; i++) {
 
        // if frequency of character str[i] is not
        // equal to 0
        if (freq[str[i] ] != 0) {
 
            ans
            freq[str[i]] = 0;
        }
    }
}

void solve()
{
    int n,m;
    cin>> n;

    int arr[100000];

    for(int i =1; i < n;i++){
        cin>>arr[i];
    }

    // 'freq[]' implemented as hash table
    int freq[SIZE];
 
    // initialize all elements of freq[] to 0
    memset(freq, 0, sizeof(freq));
   
    
    
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
