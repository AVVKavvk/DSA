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
//                                                   1
//                                                   1 1
//                                                   1 2 1
//                                                   1 3 3 1
//                                                   1 4 6 4 1
//                                                   1 5 10 10 5 1
//                                                   1 6 15 20 15 6 1

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c = c * (i - j) / j;
        }
        cout<<endl;
    }
    return 0;
}