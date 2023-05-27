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
//  1
//  1 2
//  1   3
//  1     4
//  1 2 3 4 5

int main()
{

    int n;
    cin >> n;

    //* half solid numeric pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j+1 << ' ';
    //     }
    //     cout << endl;
    // }

    //* half  hollow numeric pyramid

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i || i == n - 1)
                cout << j + 1 << " ";
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}