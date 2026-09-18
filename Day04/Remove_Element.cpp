class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int p = 0;

        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] != val)
            {
                nums[p] = nums[j];
                p++;
            }
        }

        return p;
    }
};
