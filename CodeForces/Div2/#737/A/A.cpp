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
int arraySum(int a[], int n) 
{
    int initial_sum  = 0; 
    return accumulate(a, a+n, initial_sum);
}

void solve()
{
    long n;
    cin>>n;
    long a[n];
    float max=INT_MIN,sum=0;
    long ind =0;
    for (long i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>max){
            max = a[i];
            ind =i;
        }
        
    }
    for (long i = 0; i < n; i++)
    {
        if(ind!=i){
            sum+=a[i];
        }
    }
    
    
    
    printf("%.9lf\n",((sum/(n-1))+max));
    
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
