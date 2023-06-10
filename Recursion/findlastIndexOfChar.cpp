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

void findIndex(vector<int> &arr, int j, int &index, int target)
{

    if (j < 0)
    {
        return;
    }
    if (arr[j] == target)
    {
        index = j;
        return;
    }
    findIndex(arr, j - 1, index, target);
}

void findIndex1(vector<int> &arr, int i, int &index, int target)
{

    if (i >= arr.size())
    {
        return;
    }
    if (arr[i] == target)
    {
        index = i;
        return;
    }
    findIndex(arr, i + 1, index, target);
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 8, 5, 5, 4, 4, 3, 1, 2, 6};
    int index = -1;
    int target;
    cin >> target;
    int j = arr.size() - 1;
    findIndex(arr, j, index, target);

    cout << index;

    int i = 0;
    findIndex1(arr, i, index, target);
    cout << index;
    return 0;
}