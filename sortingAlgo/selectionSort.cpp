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

int main()
{
    vei v{1, 5, 7, 9, 6, 2, 3};
    for (auto i : v)
    {
        cout << i << ' ';
    }
    for (int i = 0; i < v.size()-1; i++)
    {
        int miniIndex =i;
        for (int j = i; j < v.size() ; j++)
        {
            if(v[j]<v[miniIndex]){
                miniIndex=j;
            }
        }
        swap(v[miniIndex], v[i]);
    }
    nl;
    for (auto i : v)
    {
        cout << i << ' ';
    }

    return 0;
}