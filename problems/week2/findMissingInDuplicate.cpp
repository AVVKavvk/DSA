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
void findMissing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index-1] *= -1;
        }
    }
    fli(0, n)
    {
        if(arr[i]>0){
            ps(i+1);
        }
    }
}

int main()
{
    int n;
    int arr[] = {1, 2, 3, 3, 3,2};
    n = sza(arr);
    findMissing(arr, n);
    return 0;
}