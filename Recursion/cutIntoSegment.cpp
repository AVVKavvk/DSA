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

int cutSegment(int n, int x, int y, int z)
{

    if (n == 0)
    {
        return 0;
    }

    int ans1=INT_MIN;
    if (n - x >= 0)
    {

        ans1 = cutSegment(n - x, x, y, z) + 1;
    }
    int ans2=INT_MIN;
    if (n - y >= 0)
    {
        ans2 = cutSegment(n - y, x, y, z) + 1;
    }
    int ans3=INT_MIN;
    if (n - z >= 0)
    {
        ans3 = cutSegment(n - z, x, y, z) + 1;
    }

int ans= max(ans1, max(ans2, ans3));
}

int main()
{
    int n = 10;
    int x = 2;
    int y = 5;
    int z = 2;

    int ans = cutSegment(n, x, y, z);
    if (ans < 0)
    {
        ans = 0;
    }

    cout << ans << endl;
    return 0;
}