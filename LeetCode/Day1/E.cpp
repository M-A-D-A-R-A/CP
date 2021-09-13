class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedintervals;
        if(intervals.size()==0){
            return mergedintervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tem = intervals[0];
        for(auto it : intervals){
            if(it[0]<=tem[1]){
                tem[1] = max(it[1],tem[1]);
            }else{
                mergedintervals.push_back(tem);
                tem = it;
            }
            
        }
        mergedintervals.push_back(tem);
            return mergedintervals;
    }
};