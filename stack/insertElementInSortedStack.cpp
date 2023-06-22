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

void insertElement(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    if (st.top() > element)
    {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();
    insertElement(st, element);

    st.push(temp);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int element = st.top();
    st.pop();
    sortStack(st);
    insertElement(st, element);
}
int main()
{
    stack<int> st;
    st.push(5);
    st.push(0);
    st.push(6);
    st.push(2);
    st.push(1);

    sortStack(st);

        while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}