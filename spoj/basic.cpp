#include <bits/stdc++.h>
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
using namespace std;
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

int main()
{

    long long int n, m;
    cin >> n >> m;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int maxi = -1;

    for (long long int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    cout << "maxi" << maxi << endl;
    long long int sum = 0;
    long long int ans = -1;
    for (long long int i = 0; i < maxi; i++)
    {

        sum = 0;
        for (long long int j = 0; j < n; j++)
        {

            // ps(arr[j]-i);
            if ((arr[j] - i) > 0)
            {
                sum += arr[j] - i;
            }

            // cout<<sum<<" ";
        }
        if (m <= sum)
        {
            ans = i;
        }

        p(ans);
        nl;
    }
    return 0;
}