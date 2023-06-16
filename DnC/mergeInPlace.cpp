class Solution {
public:


void mergeInPlace(vector<int>& arr,int start,int end,int mid){
   
int totalSize=end-start+1;
int gap=(totalSize/2) + (totalSize%2);
while(gap>0){
    int i=start,j=start + gap;
while(j<=end){
    if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
    }
    i++;
    j++;
}

gap= (gap<=1)? 0 :(gap/2)+(gap%2);
}


}
void mergeSort(vector<int>& nums,int start,int end){
if(start>=end){
    return ;
}
int mid=start+(end-start)/2;
mergeSort(nums,start,mid);
mergeSort(nums,mid+1,end);

mergeInPlace(nums,start,end,mid);

}
    vector<int> sortArray(vector<int>& nums) {
      
        int start=0;
        int end=nums.size()-1;
        mergeSort(nums,start,end);
        return nums;
    }
};