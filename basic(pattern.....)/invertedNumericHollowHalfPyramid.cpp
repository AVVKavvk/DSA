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
//  1 2 3 4 5
//  2     5
//  3   5
//  4 5
//  5

int main()
{

    int n;
    cin >> n;

    //* half inverted pyraimid   

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     cout << endl;
    // }

    //*  half hollow inverted pyramid 
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(j==i || j==n-1 || i==0)
            cout << j + 1 << " ";
            else cout<<"  ";
        }
        cout << endl;
    }

    return 0;
}