
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n,c1=0,c2=0;
    int min =0;
    while (t)
    {
        cin>>n;
        for (c2=n/2;c2>0;c2--)
        {
            c1=n-2*c2;

            
            if(min>=abs(c1-c2)){
                min=abs(c1-c2);
                
            }
        }

        t--;

        cout<<c1<<c2;
        
        
    }
    

}