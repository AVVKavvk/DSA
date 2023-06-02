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

bool compareString(string a, string b)
{
    int n1 = a.length();
    int n2 = b.length();

    // *    M1

    // int i = 0;
    // int j = 0;
    // while ((i <= j) && (i < n1) && (j < n2))
    // {
    //     if (a[i] != b[j])
    //     {
    //         return false;
    //     }
    //     i++;
    //     j++;
    // }

    // if (i != n1)
    // {
    //     return false;
    // }
    // if (j != n2)
    // {
    //     return false;
    // }

    //?   M2

    if (n1 != n2)
    {
        return false;
    }

    for (int i = 0; i < n1; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    // string a = "vipin";
    // string b = "vipiN";
    // string b = "vipink";
    // string b = "Vipink";

    ///*    not in-built

    // if (compareString(a, b))
    // {
    //     cout << "true";
    // }
    // else
    // {
    //     cout << "false";
    // }

    //?      built-in

    // string a = "vipin";
    // string a = "vipiA";
    string a = "vipiN";
    string b = "vipiN";
    pn(a.compare(b));

    return 0;
}