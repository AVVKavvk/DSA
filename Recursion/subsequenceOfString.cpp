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

void subsequence(string &a, int i, int &n, string ans, vector<string> &s)
{
    if (i >= n)
    {
        s.push_back(ans);
        return;
    }

    //* not include
    subsequence(a, i + 1, n, ans, s);

    //* include
    ans.push_back(a[i]);
    subsequence(a, i + 1, n, ans, s);
}
int main()
{
    string a = "abc";
    int n = a.length();
    int i = 0;
    string ans = "";
    vector<string> s;
    subsequence(a, i, n, ans, s);
    for (auto i : s)
    {
        cout << i << endl;
    }
    return 0;
}