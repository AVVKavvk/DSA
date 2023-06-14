#include <bits/stdc++.h>
using namespace std;
#define pi 2.14
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

bool isSafe(int arr[][2], int x, int y, int row, int col, vector<vector<bool>> &visited)
{

    if (((x >= 0 && x < row) && (y >= 0 && y < col)) && (arr[x][y] == 1) && (visited[x][y] == false))
    {
        return true;
    }

    return false;
}
void solveMaze(int arr[][2], int x, int y, int row, int col, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    if (x == row - 1 && y == col - 1)
    {
        path.push_back(output);
        return;
    }

    //   Down -> x+1,y

    if (isSafe(arr, x + 1, y, row, col, visited))
    {
        visited[x + 1][y] = true;
        solveMaze(arr, x + 1, y, row, col, visited, path, output + 'D');
        visited[x + 1][y] = false;
    }

    // Left ->  x,y-1
    if (isSafe(arr, x, y - 1, row, col, visited))
    {
        visited[x][y - 1] = true;
        solveMaze(arr, x, y - 1, row, col, visited, path, output + 'L');
        visited[x][y - 1] = false;
    }
    // Right  ->  x,y+1

    if (isSafe(arr, x, y + 1, row, col, visited))
    {
        visited[x][y + 1] = true;
        solveMaze(arr, x, y + 1, row, col, visited, path, output + 'R');
        visited[x][y + 1] = false;
    }
    // Up  ->   x-1,y
    if (isSafe(arr, x - 1, y, row, col, visited))
    {
        visited[x - 1][y] = true;
        solveMaze(arr, x - 1, y, row, col, visited, path, output + 'U');
        visited[x - 1][y] = false;
    }
}

int main()
{
    int arr[2][2] = {{1, 1}, {1, 1}};

    if (arr[0][0] == 0)
    {
        cout << "No path Exits";
        return 0;
    }
    int x = 0;
    int y = 0;
    string output = "";
    vector<string> path;
    int row = 2, col = 2;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
visited[0][0]=true;
    solveMaze(arr, x, y, row, col, visited, path, output);

    if (path.size() == 0)
    {

        cout << "No path Exits";
        return 0;
    }
    for (auto i : path)
    {
        cout << i << " ";
    }
    return 0;
}