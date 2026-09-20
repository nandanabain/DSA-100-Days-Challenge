class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> w;

        for(int i = 0; i < s.length(); i++)
        {
            w[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++)
        {
            w[t[i]]--;
        }

        for(auto x : w)
        {
            if(x.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};
