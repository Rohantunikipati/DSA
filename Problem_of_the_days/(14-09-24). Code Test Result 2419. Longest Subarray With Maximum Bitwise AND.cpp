class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int max_val = 0;
        int max_len = 0;
        int curr_len = 0;

        for (int i : nums)
        {
            if (max_val < i)
            {
                max_val = i;
                max_len = 1;
                curr_len = 1;
            }
            else if (i == max_val)
            {
                curr_len++;
                if (max_len < curr_len)
                    max_len = curr_len;
            }
            else
            {
                curr_len = 0;
            }
        }
        return max(max_len, curr_len);
    }
};