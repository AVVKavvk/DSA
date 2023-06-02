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
bool palindrome(string name)
{
    int n = name.length();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (name[i] != name[j])
        {

            return false;
        }

        i++;
        j--;
    }
    return true;
}

string tolower(string s)
{
    int n = s.length();
    string b = "";
    for (int i = 0; i < n; i++)
    {
        if (int((s[i]) >= 65) && (int(s[i]) <= 90))
        {
            s[i] = s[i] + 32;

            b.push_back(s[i]);
            // cout<<s[i]<<endl;
        }
        else
        {
            b.push_back(s[i]);
        }
    }
    return b;
}
string removeExtre(string s)
{
    int n = s.length();
    string a;
    for (int i = 0; i < n; i++)
    {
        if (int((s[i]) >= 65) && (int(s[i]) <= 90) || (int((s[i]) >= 97) && (int(s[i]) <= 122)) || (((s[i]) >= '0') && ((s[i]) <= '9')))
        {
            a.push_back(s[i]);
        }
    }
    return a;
}
int main()
{
    string name;

    getline(cin, name);
    // cig(name, 50);
    // tolower(name);
    // p(name);
    string b = removeExtre(name);

    string c = tolower(b);
    p(c);
    // cout << char('C' + 32);
    // cout << char('c' - 32);
    return 0;
}