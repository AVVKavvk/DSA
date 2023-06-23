#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define fli(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j < b; j++)
#define flk(a, b) for (int k = a; k < b; k++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define sz size()
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define nl std::cout << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define cig(arr, n) cin.getline(arr, n)
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);


vector<int> prevSmallerIndex(vector<int> &arr)
{

    vector<int> ans(arr.size());
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];

        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);

    // stack<int>st;
    // st.push(-1);

    vector<int> ans = prevSmallerIndex(arr);

    // for(int i=0;i<arr.size();i++){
    //     int curr=arr[i];
    //     while(st.top()>=curr){
    //         st.pop();
    //     }
    //     ans[i]=st.top();
    //     st.push(curr);
    // }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    nl;
    return 0;
}