#include <bits/stdc++.h>
using namespace std;
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
#define cig(arr, n) cin.getline(arr, n)
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);
bool isSafe(int row, int col, vector<vector<int>> &board, int n)
// bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    int i = row;
    int j = col;

    //*     left part
    while (j >= 0)
    {
        if (board[i][j] == 1)
        // if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    i = row;
    j = col;

    //?    upper digonal

    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
        // if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i--;
    }
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 1)
        // if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void print(vector<vector<int>> &board, int n, vector<vector<int>> &ans)
// void print(vector<vector<char>> &board, int n, vector<vector<char>> &ans)
{

    vector<int>a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << board[i][j] << " ";
            // ans[i][j]=board[i][j];
            if(board[i][j]==1){
                a.push_back(j+1);
            }
        }
        nl;
    }
     for (int j = 0; j < n; j++)
        {
            // cout << board[i][j] << " ";
            // ans[i][j]=board[i][j];
            cout<<a[j];
        }
    ans.push_back(a);
    nl;
}
void nQueen(vector<vector<int>> &board, int col, int n, vector<vector<int>> &ans)
// void nQueen(vector<vector<char>> &board, int col, int n, vector<vector<char>> &ans)
{
    if (col >= n)
    {
        print(board, n, ans);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 1;
            // board[row][col] = 'Q';
            nQueen(board, col + 1, n, ans);
            board[row][col] = 0;
            // board[row][col] = '-';
        }
    }
}

int main()
{

    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    // vector<vector<int>> ans(n, vector<int>(n, 0));
    // vector<vector<char>> board(n, vector<char>(n, '-'));
    // vector<vector<char>> ans(n, vector<char>(n, '-'));

    int col = 0;
    nQueen(board, col, n, ans);
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << board[i][j] << " ";
            // ans[i][j]=board[i][j];
        //    cout<< ans[i];
        }
        nl;
    }


    return 0;
}