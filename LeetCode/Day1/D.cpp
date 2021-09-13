//Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxint = INT_MIN;
        for(auto it : nums){
            sum += it;
            maxint = max(sum,maxint);
            if(sum <0) sum = 0;
            
        }
        return maxint;
    }
};