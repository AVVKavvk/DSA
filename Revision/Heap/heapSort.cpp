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

void heapify(int arr[], int n, int i)
{
    int index = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    int larget = index;

    if (left <= n && arr[larget] < arr[left])
    {
        larget = left;
    }
    if (right <= n && arr[larget] < arr[right])
    {
        larget = right;
    }
    if (index == larget)
        return;
    else
    {
        swap(arr[index], arr[larget]);
        index = larget;
        heapify(arr, n, index);
    }
}
void builddHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}
void heapSort(int arr[], int n)
{
    while (n != 1)
    {
        swap(arr[1], arr[n--]);
        heapify(arr, n, 1);
    }
}
int main()
{
    int arr[] = {-1, 2, 45, 33, 67, 55, 889, 567, 334, 786};
    int size = 9;
    builddHeap(arr, size);
    heapSort(arr, size);
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    nl;

    return 0;
}