// we made the 2D array of (nxm) look like an normal array because the Integers in each row are sorted from left to right and The first integer of each row is greater than the last integer of the previous row. 
// SO use it as a 1D 1D array of (0,(nxm)-1) and then did the binary search on it ,


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int lo = 0;
        if(!matrix.size()) return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
    }
};