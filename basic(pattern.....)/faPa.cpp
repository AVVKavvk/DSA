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
//                                                  1
//                                                  2*2
//                                                  3*3*3
//                                                  4*4*4*4
//                                                  5*5*5*5*5
//                                                  4*4*4*4
//                                                  3*3*3
//                                                  2*2
//                                                  1

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
            {
                cout << i + 1;
            }
            else
            {
                cout << i + 1 << "*";
            }
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (j == n - i - 2)
            {
                cout << n - i - 1;
            }
            else
            {
                cout << n - i - 1 << "*";
            }
        }
        cout << endl;
    }
    return 0;
}