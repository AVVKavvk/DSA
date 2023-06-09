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

void binaryearch(int arr[], int s, int e, int &key, int &index)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        index = -1;
        return;
    }
    if (arr[mid] == key)
    {
        index = mid;
        return;
    }
    if (arr[mid] > key)
    {
        binaryearch(arr, s, mid - 1, key, index);
    }
    else
    {
        binaryearch(arr, mid + 1, e, key, index);
    }
}
int main()
{
    int arr[] = {1, 4, 8, 10, 45, 85, 125};
    int n = sizeof(arr) / sizeof(int);
    int index = -1;
    int s = 0;
    int e = n - 1;
    int key;
    cin >> key;
    binaryearch(arr, s, e, key, index);

    cout << index;
    return 0;
}