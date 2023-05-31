class Solution {
public:
int getPivot(vector<int> arr,int n){
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int bianrySearch(vector<int> arr, int s,int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot=getPivot(nums,n);
        if(target>=nums[pivot]&&target<=nums[n-1]){
            return bianrySearch(nums,pivot,n-1,target);
        }
        else{
            return bianrySearch(nums,0,pivot-1,target);
        }
    }
};