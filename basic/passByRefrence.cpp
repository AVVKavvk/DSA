#include <bits/stdc++.h>
#define pi 3.14
#define fl(a, b) for (int i = a; i < b; i++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define ps(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define p(a) std::cout << a;
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);

void inc(int brr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        brr[i] += 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    inc(arr, 7);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}