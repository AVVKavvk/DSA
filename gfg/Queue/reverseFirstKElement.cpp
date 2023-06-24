//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.

void reverseKElement(queue<int> &q, int &k,int &cnt){
    if(cnt==k){
        return ;
    }
    
    int temp=q.front();
    q.pop();
    cnt++;
    reverseKElement(q,k,cnt);
    q.push(temp);
    
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    int cnt=0;
    
    reverseKElement(q,k,cnt);
    int size=q.size();
    while(size-k!=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        k++;
    }
    return q;
}