//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    int size=s.size();
    
    stack<char>st;
    
    
    for(int i=0;i<size;i++){
        
        if(st.empty()){
            st.push(s[i]);
        }
        
        else if(s[i]=='{'){
            st.push(s[i]);
        }
        
        else if(s[i]=='}' && st.top()=='{'){
            st.pop();
        }
        
        else if(s[i]=='}'){
            st.push(s[i]);
        }
    }
    
    
    string sa="";
    
    while(!st.empty()){
        sa+=st.top();
        st.pop();
    }
    
    reverse(sa.begin(),sa.end());
    
    
    // cout<<sa<<endl;
    
    if(sa.size()%2!=0){
        return -1;
    }
    
    if(sa.size()==0){
        return 0;
    }
    
    int ans=0;
    
    for(int i=0;i<sa.size()-1;i=i+2){
        if(sa[i]==sa[i+1]){
            ans++;
        }
        
        else{
            ans=ans+2;
        }
    }
    return ans;
}