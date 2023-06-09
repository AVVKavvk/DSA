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

int targetSum(vector<int> &arr, int target, int sum)
{

    if (target == sum)
    {
        return 0;
    }

    if (sum >target)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = targetSum(arr, target, sum + arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(ans + 1, mini);
        }
    }

    return mini;
}

int targetSum1(vector<int> &arr, int target)
{

    if (target == 0)
    {
        return 0;
    }

    if (target < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = targetSum1(arr, (target - arr[i]));
        if (ans != INT_MAX)
        {
            mini = min(ans + 1, mini);
        }
    }

    return mini;
}


int main()
{
    vector<int> arr = {1, 2, 3};
    int target;
    cin >> target;
    int sum = 0;
    // int ans = targetSum1(arr, target);
    int ans = targetSum(arr, target, sum);
    cout << ans;
    return 0;
}