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

int partition(int *arr, int s, int e)
{
    int pivotIndex = s;
    int pivotElement = arr[s];

    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (pivotElement >= arr[i])
        {
            count++;
        }
    }

    int rightPivotIndex = s + count;
    // cout<<pivotElement<<" "<<arr[pivotIndex]<<endl;
    swap(arr[pivotIndex], arr[rightPivotIndex]);
    // cout<<pivotElement<<" "<<arr[pivotIndex]<<endl<<endl;

    int i = s;
    int j = e;

    while (i < rightPivotIndex && j > rightPivotIndex)
    {

        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        if (i < rightPivotIndex && j > rightPivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return rightPivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int indexOfPivot = partition(arr, s, e);

    quickSort(arr, s, indexOfPivot - 1);

    quickSort(arr, indexOfPivot + 1, e);
}

int main()
{
    int arr[] = {1, 2, 4, 5, 7, 55, 2, 5, 4, 7, 9, 96};
    int n = sza(arr);

    quickSort(arr, 0, n - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}