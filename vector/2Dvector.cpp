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

#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

int main()
{
    // v2e arr;
    //     vei a{1, 2, 3};
    //     vei b{4, 5, 6, 7, 8};
    //     vei c{9, 10};
    // arr.pb(a);
    // arr.pb(b);
    // arr.pb(c);

    v2e arr(3, vei(5, 0));
    fli(0, arr.sz)
    {
        flj(0, arr[i].sz)
        {
            ps(arr[i][j]);
        }
        nl;
    }
    return 0;
}