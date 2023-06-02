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
    char a[20];
    a[0] = 'v';
    a[1] = 'i';
    a[2] = '\0';
    a[3] = 'p';
    a[4] = 'i';
    a[5] = 'n';

    fli(0, strlen(a))
    {
        p2s(i, a[i]);
    }
   

    string b = "vi\0pin";
    fli(0, b.length())
    {
        p2s(i, b[i]);
    }
    return 0;
}