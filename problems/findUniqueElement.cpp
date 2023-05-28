#include <bits/stdc++.h>
#define pi 3.14
#define fl(a, b) for (int i = a; i < b; i++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);

int uqiuneElement1(int arr[], int size)
{
    int a = 0;
    fl(0, size)
    {
        a = a ^ arr[i];
    }
    return a;
}
int uqiuneElement(ve arr)
{
    int a = 0;
    fl(0, arr.size())
    {
        a = a ^ arr[i];
    }
    return a;
}
int main()
{
    
    // int arr[]={1,2,3,7,2,3,1};
    ve a;
    a.pb(1);
    a.pb(2);
    a.pb(3);
    a.pb(3);
    a.pb(2);
    a.pb(1);
    a.pb(8);
    // int b=uqiuneElement1(arr ,7);
    int b=uqiuneElement(a);
    p(b);

    return 0;
}