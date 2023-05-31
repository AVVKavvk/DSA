//* method 1 non optimize

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};

//*       method 2  optimize but chamging array

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if (nums[index] < 0)
            {
                ans = index;
                break;
            }
            nums[index] *= -1;
        }
        return ans;
    }
};

//*      method 3   optimize with no change in array

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};