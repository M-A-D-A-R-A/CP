#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        vector<int> left(n); //Left boundaries
        vector<int> right(n); // Right boundaries
        
        left[0] = -1;
        right[n - 1] = n;
        
        //Left boundary calculation.
        for(int i=1; i < n; i++){
            int prev = i-1; //Comparing previous heights
            while(prev >= 0 && heights[prev] >= heights[i]){
                prev = left[prev]; //We do this to minimise the jumps we make to the left.
            }
            left[i] = prev; //Set boundary for current height.
        }
        
        //Right boundary calculation.
        for(int i = n-2; i >= 0; i--){
            int next = i+1; //Comparing next heights. 
            while(next < n && heights[next] >= heights[i]){
                next = right[next];//Minimise jumps in the vector. 
            }
            right[i] = next; //Set boundary for current height.
        }
        
        //Area calculation
        for(int i=0; i < n; i++){
            int width = right[i] - left[i] - 1;
            maxArea = max(maxArea, heights[i] * width);
        }
        return maxArea;
    }


int main(int argc, char const *argv[])
{
    vector<int> v = {2,1,5,6,2,3};
 /* code */

 int ans = largestRectangleArea(v);

 cout << ans <<endl;
    
    
    return 0;
}
