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

bool isPliandroem(string s)
{
    int n = s.length();
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }
    return true;
}
int main()
{
    string a;

    getline(cin, a);
    vector<string> v;

    fli(0, a.length())
    {
        flj(1, a.length() - i + 1)
        {
            v.pb(a.substr(i, j));
        }
    }
    int ans = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (isPliandroem(v[i]))
        {
            ans++;
        }
    }

    ps(ans);
    return 0;
}