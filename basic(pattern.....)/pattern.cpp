#include <bits/stdc++.h>
#define pi 3.14
#define fl(a, b) for (int i = a; i < b; i++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define ps(a, b) std::cout << a << ' ' << b << std::endl;
#define p(a) std::cout << a << std::endl;
#define vet vector<char>
using namespace std;

int main()
{
    int row, col;
    cout << "row and col";
    cin >> row >> col;

 









 
 //* solid diamond 
    // * full pyramid 1
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }
    //* inverted full pyramid 1
    // for (int i = row; i >=0; i--)
    // {
    //     for (int j = 0; j < row - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }

 
     // * half pyramid 2
    // for (int i = 0; i < row; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < 2 * row - 1; j++)
    //     {
    //         if (j < row - i - 1)
    //         {
    //             cout << " ";
    //         }
    //         else if (k < 2 * i + 1)
    //         {
    //             if (k == 0 || k == 2 * i || i== row-1)
    //             {
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //             k++;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // //* full pyramid 2
    // for (int i = 0; i < row; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < row * 2 - 1; j++)
    //     {
    //         if (j < row - i - 1)
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
//* inverted full pyramid 1
    // for (int i = row; i >=0; i--)
    // {
    //     for (int j = 0; j < row - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }

    //* full pyramid 1
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = row; i>=0; i--)
    // {
    //     for (int j = 0; j < i ; j++)
    //     {
    //         cout << j+1;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i<row; i++)
    // {
    //     for (int j = 0; j < i+1 ; j++)
    //     {
    //         cout << j+1;
    //     }
    //     cout << endl;
    // }
    // for (int i = row; i >=0; i--)
    // {
    //     for (int j = 0; j < i ; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < i+1 ; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     if (i == 0 || i == row - 1)
    //     {

    //         for (int j = 0; j < col; j++)
    //         {

    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         cout << "* ";
    //         for (int j = 1; j < col - 1; j++)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    return 0;
}