#include <iostream>
#include <boost/math/common_factor.hpp>
#include <algorithm>
  
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    int ans;
    while (t--)
    {
        int x;
        cin >> x;
        ans = (boost::math::lcm(1,x-1)) - __gcd(1, x-1) << endl;

    }
    return ans;
}