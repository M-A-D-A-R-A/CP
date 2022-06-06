#include<iostream>
using namespace std;
int main() {

    int t;
    cin >> t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(x > y+200){
            cout<<"YES"<<endl;
        }
        cout << "NO";
    }


    return 0;
}