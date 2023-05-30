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
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

int bianrySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 4, 5, 7, 9, 45, 86, 102, 145, 560};
    vei v{1, 4, 5, 7, 9, 45, 86, 102, 145, 560};
    int size = 10;
    int target;
    p("enter target");
    cin >> target;
    // int index=bianrySearch(arr,size,target);
    // if(index==-1){
    //     p("target not found ");
    // }
    // else{
    //     p2s("target found at index : ",index);
    // }

    //* fro vector

    if (binary_search(v.begin(), v.end(), target))
    {
        p("target found ");
    }
    else
    {
        p("target not found ");
    }

    //*  for array

    // if (binary_search(arr, arr + size, target))
    // {
    //     p("target found at index : ");
    // }
    // else
    // {
    //     p("target not found ");
    // }

    return 0;
}