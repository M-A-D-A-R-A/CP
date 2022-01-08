//The Boyer-Moore voting algorithm is one of the popular optimal algorithms which is used to find the majority element among the given elements that have more than N/ 2 occurrences.

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int cnt = 0;
        int cand = 0;

        for (int num : nums)
        {
            if (cnt == 0)
                cand = num;
            if (num == cand)
                cnt++;
            else
                cnt--;
        }

        return cand;
    }
};