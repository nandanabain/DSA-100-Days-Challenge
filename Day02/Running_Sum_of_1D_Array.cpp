// LeetCode #1480 - Running Sum of 1d Array
// Approach: Running Sum
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        int sum = 0;
        vector<int> runningsum;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            runningsum.push_back(sum);
        }

        return runningsum;
    }
};
