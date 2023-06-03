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
bool cop1(int a, int b)
{
    return a > b;
}
bool cop2(char a, char b)
{
    return a > b;
}
bool cop3(string a, string b)
{
    return a.length() > b.length();
}
bool cop4(string a, string b)
{
    int sum1=0;
    int sum2=0;
    for(int i=0;i<a.length();i++){
        sum1=sum1+(a[i]-'a');
    }
    for(int i=0;i<b.length();i++){
        sum2=sum2+(b[i]-'a');
    }

    return sum1>sum2;
}

int main()
{
    // vei a{1, 2, 3, 5, 4, 4};
    // sort(a.begin(), a.end(), cop1);
    // vector <string> b{""};
    // string b = "vipin 0 ? @ ..` ``, kumawat";

    // sort(b.begin(), b.end(), cop2);


    // vector <string> b{"vipin","kumawat","synder","vivek"};
    // sort(b.begin(), b.end(), cop3);


    vector <string> b{"vipinwz","kumawat","syndera","vzyivek"};
    sort(b.begin(), b.end(), cop4);

    for (auto i : b)
    {
        cout << i<< " ";
    }
    // for (auto i : a)
    // {
    //     cout << i << ' ';
    // }                                                                 
    return 0;
}