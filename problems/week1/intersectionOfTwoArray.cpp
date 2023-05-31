#include <bits/stdc++.h>
#define pi 3.14
#define fli(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j < b; j++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define sz size()
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);

int main()
{
    ve arr{1,1,1, 2, 3, 4, 5, 6};
    ve brr{1, 1, 2, 2, 5, 4,1,1,1, 7};
    ve crr;
    fli(0, arr.sz)
    {
        flj(0, brr.sz)
        {
            if (arr[i] == brr[j])
            {
                crr.pb(arr[i]);
                brr[j] = INT_MIN;
                arr[i] = INT_MAX;
                // ps(brr[j]);
            }
        }
    }

    for (auto v : crr)
    {
        ps(v);
    }

    return 0;
}