#include <string>
#include <vector>
class Solution
{
public:
    int slove(string allowed, vector<string> &words)
    {
        unordered_set<char> st;
        int ans = 0;
        for (auto ch : allowed)
            st.insert(ch);
        for (auto str : words)
        {
            int count = 1;
            for (auto ch : str)
            {
                if (st.find(ch) == st.end())
                    count = 0;
            }
            ans += count;
        }
        return ans;
    }
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        return slove(allowed, words);
    }
};