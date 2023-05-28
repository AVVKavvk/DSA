#include <bits/stdc++.h>
#define pi 3.14
#define fl(a, b) for (int i = a; i < b; i++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);

void extremePrint(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while ((i <= j))
    {
        if (i == j)
        {
            ps(arr[i]);
            break;
        }
        ps(arr[i]);
        ps(arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    extremePrint(arr, size);
    return 0;
}