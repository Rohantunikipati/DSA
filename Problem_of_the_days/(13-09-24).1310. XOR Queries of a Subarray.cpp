class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> prefix_xor_array(arr.size());
        vector<int> result;
        prefix_xor_array[0] = arr[0];

        for (int i = 1; i < arr.size(); i++)
            prefix_xor_array[i] = prefix_xor_array[i - 1] ^ arr[i];

        for (auto query : queries)
        {
            int start_index = query[0];
            int end_index = query[1];
            result.push_back(prefix_xor_array[end_index] ^ (start_index != 0 ? prefix_xor_array[start_index - 1] : 0));
        }
        return result;
    }
};