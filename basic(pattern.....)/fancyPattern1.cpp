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
//        1
//       2*2
//      3*3*3
//     4*4*4*4
//    5*5*5*5*5

int main()
{

    int n;
    cin >> n;

    //* full pyramid with number
    // for (int i = 0; i < n; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < n * 2 - 1; j++)
    //     {
    //         if (j < n - i - 1)
    //         {
    //             cout << " ";
    //         }

    //         else if (k < 2 * i + 1)
    //         {
    //             cout << "*";
    //             k++;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n * 2 - 1; j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }

            else if (k < 2 * i + 1)
            {

                if (k == 2 * i)
                {

                    cout << i + 1;
                }
                else
                {
                    cout << i + 1 << "*";
                }
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}