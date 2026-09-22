class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left=0,right=height.size()-1;
        int maxarea=0;
        while(left<right)
        {
            int length=right-left;
            int min1=min(height[left],height[right]);
            int area=length*min1;
            maxarea=max(maxarea,area);
            if(height[right]>height[left])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};
