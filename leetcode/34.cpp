class Solution
{
public:
    int findLastOccurence(vector<int> arr, int size, int key)
    {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;
        int index = -1;
        while (s <= e)
        {
            if (key == arr[mid])
            {
                index = mid;
                s = mid + 1;
            }
            else if (key < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return index;
    }

    int findFirstOccurence(vector<int> arr, int size, int key)
    {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;
        int index = -1;
        while (s <= e)
        {
            if (key == arr[mid])
            {
                index = mid;
                e = mid - 1;
            }
            else if (key < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return index;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        int size = nums.size();

        int firstOccurence = findFirstOccurence(nums, size, target);
        int lastOccurence = findLastOccurence(nums, size, target);

        ans.push_back(firstOccurence);
        ans.push_back(lastOccurence);

        return ans;
    }
};