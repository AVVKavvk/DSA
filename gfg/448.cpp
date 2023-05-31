class Solution
{
public:
    vector<int> findMissing(vector<int> arr, int n)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int index = abs(arr[i]);
            if (arr[index - 1] > 0)
            {
                arr[index - 1] *= -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        return findMissing(nums, n);
    }
};