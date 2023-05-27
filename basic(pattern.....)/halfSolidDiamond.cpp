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
//?                                       *
// ?                                      **
//  ?                                     ***
//   ?                                    ****
//    ?                                   *****
//      ?                                 ****
//      ?                                 ***
//       ?                                **
//      ?                                 *

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }

    return 0;
}