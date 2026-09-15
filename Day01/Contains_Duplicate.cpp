// LeetCode #217 - Contains Duplicate
// Approach: Hash Set
// Time Complexity: O(n) average
// Space Complexity: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int a = nums.size();
        unordered_set<int> s;

        for(int i = 0; i < a; i++)
        {
            if(s.find(nums[i]) != s.end())
            {
                return true;
            }
            else
            {
                s.insert(nums[i]);
            }
        }

        return false;
    }
};
