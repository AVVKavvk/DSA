
// void solve(vector<int>& arr,vector<vector<int>>& ans,int index,vector<int>output,int &target,int sum){

// if(sum==target){

// sort(output.begin(),output.end());
// if(!count(ans.begin(),ans.end(),output)){
//     ans.push_back(output);
// }

// return ;
// }

// if(index>=arr.size()){
//     return ;
// }
// // include

// if(sum+arr[index]<=target){
// output.push_back(arr[index]);
// solve(arr,ans,index+1,output,target,sum+arr[index]);
// output.pop_back();

// }

// // exclude

// solve(arr,ans,index+1,output,target,sum);





// }

class Solution {
public:

void solve(vector<int>& arr,vector<vector<int>>&ans,int index1,vector<int>output,int target){


if(target==0){
    // sort(output.begin(),output.end());
//  if(!count(ans.begin(),ans.end(),output)){
//      ans.push_back(output);
// }
 ans.push_back(output);
    return ;
}
if(target<0){
    return ;
}

for(int index=index1;index<arr.size();index++){
if(index>index1 && arr[index]==arr[index-1]){
    continue;
}
    output.push_back(arr[index]);
    solve(arr,ans,index+1,output,target-arr[index]);
    output.pop_back();
}

}

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>output;
     
        int index1=0;
solve(arr,ans,index1,output,target);

return ans;
    }
};