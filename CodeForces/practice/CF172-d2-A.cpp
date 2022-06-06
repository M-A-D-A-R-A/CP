//CF172-D2-A
//Word Capitaliztions

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    if(islower(s[0])){
        s[0]=toupper(s[0]);
    }
    cout<<s;
}