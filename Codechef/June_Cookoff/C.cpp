#include<iostream>
using namespace std;
int main() {
	int t;
    cin >>t;

    while(t--)
	{
        int n ;
    cin>>n;
    int arr[100000 ];
    int largest1,largest2;
	 for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
	largest1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest1])
        {
            largest1=i;
        }
    }
    if(largest1!=0) // this condition to select another index than the largest
        largest2=0;
    else
        largest2=n-1;
    for(i=0;i<n && i != largest1 ;i++)
    {
        if(arr[i]>arr[largest2])
            largest2=i;
    }

    cout << arr[largest1] + arr[largest2];
        }
}
