
class node{
    public:
    int data;
    int row;
    int col;

    node(int d,int r,int c){
        data=d;
        row=r;
        col=c;
    }
  
};

class compare{
    public:
    bool operator()(node*a,node*b){
        return a->data > b->data;
    }

};


class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        priority_queue<node*,vector<node*>,compare> minHeap;

        int k=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;

        for(int i=0;i<k;i++){
            int element=nums[i][0];
            mini=min(mini,element);
            maxi=max(maxi,element);
            node*temp=new node(element,i,0);
            minHeap.push(temp);
        }
        
        int startAns=mini;
        int endAns=maxi;

        while(!minHeap.empty()){
            node * top=minHeap.top();
            int topElement=top->data;
            int topRow=top->row;
            int topCol=top->col;
            minHeap.pop();

            mini=topElement;
            int currRange=maxi-mini;
            int ansRange=endAns-startAns;

            if(currRange<ansRange){
                startAns=mini;
                endAns=maxi;
            }

            if(topCol+1 < nums[topRow].size()){

                maxi=max(maxi,nums[topRow][topCol+1]);
                node*newNode= new node(nums[topRow][topCol+1],topRow,topCol+1);
                minHeap.push(newNode);
            }

            else break;
        }

        vector<int>ans;
        ans.push_back(startAns);
        ans.push_back(endAns);
        return ans;

    }
};










