// LeetCode #1470 - Shuffle the Array
// Approach: Two pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int s = nums.size();
        vector<int> ans;
        int st = 0, q = s - n;

        while(st < n)
        {
            ans.push_back(nums[st]);
            ans.push_back(nums[q]);
            st++;
            q++;
        }

        return ans;
    }
};
