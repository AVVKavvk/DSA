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

int findMissingElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    if (arr[0] != 1)
    {
        return 1;
    }
    if (arr[e] != n + 1)
    {
        return n + 1;
    }
    while ((e - s) > 1)
    {
        if ((arr[s] - s) != (arr[mid] - mid))
        {
            e = mid;
        }
        else if ((arr[mid] - mid) != (arr[e] - e))
        {
            s = mid;
        }
        mid = s + (e - s) / 2;
        }
    return (arr[s] + 1);
}

int findmissing(int ar[], int N)
{
    int l = 0, r = N - 1;
    while (l <= r) {
 
        int mid = (l + r) / 2;
 
        // If this is the first element
        // which is not index + 1, then
        // missing element is mid+1
        if (ar[mid] != mid + 1 &&
                        ar[mid - 1] == mid)
            return mid + 1;
 
        // if this is not the first missing
        // element search in left side
        if (ar[mid] != mid + 1)
            r = mid - 1;
 
        // if it follows index+1 property then
        // search in right side
        else
            l = mid + 1;
    }
 
    // if no element is missing
    return -1;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    // //*           method 1           using   XOR

    // int ans = 0;
    // fli(1, n + 2)
    // {
    //     ans = ans ^ i;
    // }
    // fli(0, n)
    // {
    //     ans = ans ^ arr[i];
    // }
    // p(ans);
    p("vipin");
    int ans = findMissingElement(arr, n);
    p(ans);

    return 0;
}