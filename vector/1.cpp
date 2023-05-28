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

int main()
{
    vector<int> a(20);
    a.pb(70);
    a.pb(70);
    a.pb(70);
 
    fl(0, a.size())
    {
        ps(a[i]);
    }
    // vector<int> a{10, 1, 2, 4};
    // a.pb(70);
    //  a.pb(70);
    // a.pob();
    // fl(0, a.size())
    // {
    //     ps(a[i]);
    // }

    return 0;
}