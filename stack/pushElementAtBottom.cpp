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
void pushAtBottom(stack<int> &s, int &data)
{
    int size = s.size();
    if (size == 0)
    {
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, data);
    s.push(temp);
}
int main()
{
    stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
    int data = 10;
    // int totalSize=s.size();
    pushAtBottom(s, data);

    while (!s.empty())
    {
        cout << s.top() << " ";

        s.pop();
    }
    return 0;
}