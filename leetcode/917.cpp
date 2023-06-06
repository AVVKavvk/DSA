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

    string s;
    cin >> s;
    int i = 0;
    int j = s.length() - 1;

    // *   method 1

    while (i <= j)
    {
        if ((((s[i] >= 97) && (s[i] <= 122)) || ((s[i] >= 65) && (s[i] <= 90))) && (((s[j] >= 97) && (s[j] <= 122)) || ((s[j] >= 65) && (s[j] <= 90))))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (!(((s[i] >= 97) && (s[i] <= 122)) || ((s[i] >= 65) && (s[i] <= 90))))
        {
            i++;
        }
        else if (!(((s[j] >= 97) && (s[j] <= 122)) || ((s[j] >= 65) && (s[j] <= 90))))
        {
            j--;
        }

        // cout<<"vipin";
    }
    //*         method 2          in-built     isalpha()

    while (i <= j)
    {
        if (isalpha(s[i]) && isalpha(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (!isalpha(s[i]))
        {
            i++;
        }
        else if (!isalpha(s[j]))
        {
            j--;
        }

        // cout<<"vipin";
    }
    cout << s;
    return 0;
}