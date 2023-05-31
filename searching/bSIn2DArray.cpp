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
using namespace std;
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

int binarySearch(int arr[][4], int row, int col, int key)
{
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        int rowIndex = mid / col;
        int colIndex = mid % col;
        int element = arr[rowIndex][colIndex];
        if (element == key)
        {
            //?           return col * rowIndex + colIndex;
            
            return mid;
        }
        else if (element > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int key;
    p("entere a  key: ");
    cin >> key;
    cout << "index at " << binarySearch(arr, 3, 4, key);
    return 0;
}