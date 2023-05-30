#include <bits/stdc++.h>
#define pi 3.14
#define fli(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j < b; j++)
#define flk(a, b) for (int k = a; k < b; k++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define sz size()
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define nl std::cout << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);

void tranpose(int arr[][3], int row, int col,int transposeArr[][3])
{

    fli(0, row)
    {
        flj(0, col)
        {
            transposeArr[j][i]= arr[i][j];
        }
    }
}
int main()
{
    {
        int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int transposeArr[3][3];
        fli(0, 3)
        {
            flj(0, 3)
            {

                ps(arr[i][j]);
            }
            nl;
        }
        nl;
        tranpose(arr, 3, 3,transposeArr);

        fli(0, 3)
        {
            flj(0, 3)
            {

                ps(transposeArr[i][j]);
            }
            nl;
        }
    }
    return 0;
}