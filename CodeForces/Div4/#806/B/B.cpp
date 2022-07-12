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
    int n ;
    cin >> n;
    int arr [100];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

     int b;
    char ch [10];

     

    for (int i = 0; i < n; i++)
    {
       
        cin >> b;  

        int j =0;

        while ( j < b)
        {
            cin >> ch[j++];
            if(ch[j] == 'U'){
                if(arr[i] == 9){
                    arr[i] =0;

                }
                else  arr[i]++ ;
            }
            else if(ch[j] == 'D'){
                if(arr[i] == 9){
                    arr[i] = 0;
                }else arr[i]-- ;
        }     
    }



    
            }

    for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
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
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
