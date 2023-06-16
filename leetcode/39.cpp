class Solution {
public:

void slove(vector<int>& arr,vector<vector<int>>&ans,int index,vector<int>output,int &target,int sum){

if(index>=arr.size()){
    return ;
}
if(sum==target ){
    ans.push_back(output);
    return;
}


// include

if(sum+arr[index]<=target){
    output.push_back(arr[index]);
    slove(arr,ans,index,output,target,sum+arr[index]);
    output.pop_back();
}
// exclude

slove(arr,ans,index+1,output,target,sum);



}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>output;
      int sum=0;
        int index=0;
slove(arr,ans,index,output,target,sum);
return ans;
    }
};





//*          method   2


class Solution {
public:

// void slove(vector<int>& arr,vector<vector<int>>&ans,int index,vector<int>output,int &target,int sum){

// if(index>=arr.size()){
//     return ;
// }
// if(sum==target ){
//     ans.push_back(output);
//     return;
// }


// // include

// if(sum+arr[index]<=target){
//     output.push_back(arr[index]);
//     slove(arr,ans,index,output,target,sum+arr[index]);
//     output.pop_back();
// }
// // exclude

// slove(arr,ans,index+1,output,target,sum);



// }

void solve(vector<int>& arr,vector<vector<int>>&ans,int index1,vector<int>output,int target){


if(target==0){
    ans.push_back(output);
    return ;
}
if(target<0){
    return ;
}

for(int index=index1;index<arr.size();index++){

    output.push_back(arr[index]);
    solve(arr,ans,index,output,target-arr[index]);
    output.pop_back();
}

}

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>output;
     
        int index1=0;
solve(arr,ans,index1,output,target);
return ans;
    }
};