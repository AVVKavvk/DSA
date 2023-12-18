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

void insertElement(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    if (s.top() >= x)
    {
        s.push(x);
        return;
    }
    int top = s.top();
    s.pop();
    insertElement(s, x);
    s.push(top);
}
void printing(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    insertElement(s, 1);
    insertElement(s, 5);
    insertElement(s, 7);
    insertElement(s, 2);
    insertElement(s, 0);
    printing(s);
    return 0;
}