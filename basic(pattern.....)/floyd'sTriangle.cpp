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
//                                                   2 3
//                                                   4 5 6
//                                                   7 8 9 10
//                                                   11 12 13 14 15
//                                                   16 17 18 19 20 21
//                                                   22 23 24 25 26 27 28

int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << k << ' ';
            k++;
        }
        cout << endl;
    }
    return 0;
}