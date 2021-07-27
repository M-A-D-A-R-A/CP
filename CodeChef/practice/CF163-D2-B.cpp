//CF163-D2-B
//Queue at School


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    string S;
    cin>>n>>t>>S;
    while (t--)
    {
         for (int i = 1; i < n; ++i)
        {
            if (S[i] == 'G' && S[i-1] == 'B')
            {
                S[i] = 'B';
                S[i-1] = 'G';
                ++i;
            }
        }
    }
    
    cout << S<<endl;

    return 0;
}