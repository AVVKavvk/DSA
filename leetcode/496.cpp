class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<pair<int,int>> v;

        vector<int>ans;
        stack<int> st;
        unordered_map<int,int>mp;

        for(int i=nums2.size()-1;i>=0;i--){
            int curr=nums2[i];
            while(!st.empty()&&nums2[i]>=st.top()){
                st.pop();
            }

            if(st.empty()){
                
               mp[curr]=-1;
                st.push(curr);
            }

            else{

               mp[curr]=st.top();
               st.push(curr);

            }
        }


        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};