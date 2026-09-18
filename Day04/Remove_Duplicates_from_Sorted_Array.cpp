class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int p = 0;

     for(int j = 1; j < nums.size(); j++)
      {
        if(nums[j] != nums[p])
        {
            p++;
            nums[p] = nums[j];
        }
      }

    return p + 1;
    }
};
