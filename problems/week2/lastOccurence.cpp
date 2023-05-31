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

int findLastOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int index = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            index = mid;
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return index;
}
int main()
{

    int arr[] = {1, 2, 5, 6, 6, 45, 45, 102, 560, 560};
    // vei v{1, 4, 5, 7, 9, 45, 86, 102, 145, 560};
    int size = 10;
    int target;
    p("enter target");
    cin >> target;
    // int index = findLastOccurence(arr, size, target);
    // if (index == -1)
    // {
    //     p("target not found ");
    // }
    // else
    // {
    //     p2s("target found at index : ", index);
    // }

    //* in-built fucntion

    auto a1 = upper_bound(arr, arr + size, target);
    p(a1 - arr);

    return 0;
}