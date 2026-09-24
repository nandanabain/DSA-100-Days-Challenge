class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int l = 0;

        for (int num : num_set) {
            if (num_set.find(num - 1) == num_set.end()) {
                int curr_num = num;
                int curr= 1;

                while (num_set.find(curr_num + 1) != num_set.end()) {
                    curr_num += 1;
                    curr+= 1;
                }

                l= max(l, curr);
            }
        }

        return l;
    }
};
