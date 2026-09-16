// LeetCode #1431 - Kids With the Greatest Number of Candies
// Approach: Find maximum, then compare
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans;
        int max1 = candies[0];

        for(int i = 1; i < candies.size(); i++)
        {
            max1 = max(max1, candies[i]);
        }

        for(int j = 0; j < candies.size(); j++)
        {
            ans.push_back((candies[j] + extraCandies) >= max1);
        }

        return ans;
    }
};
