class Solution {
public:
    int firstUniqChar(string s) 
    {
        for(int i=0;i<s.length();i++)
        {
            bool found=true;
            for(int j=0;j<s.length();j++)
            {
                if(s[i]==s[j] && i!=j)
                {
                  found =false;
                  break;
                }
            }
            if(found==true)
            {
                return i;
            }
        }
        return -1;
    }
};
