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

void linearSearchIn2DArray(int arr[][4], int row, int col, int key)
{
    fli(0, row)
    {
        flj(0, col)
        {
            if (arr[i][j] == key)
            {
                p2s("found:", key);
                return;
            }
        }
    }
    p2s("Not found:", key);
    return;
}
int main()
{
    int arr[3][4] = {1, 2, 4, 5, 7, 8, 6, 12, 18, 17, 75, 36};
    int key;
    p("enter key to find: ");
    cin >> key;
    linearSearchIn2DArray(arr, 3, 4, key);
    return 0;
}