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

int main()
{
    int n, m;
    cin >> n >> m;

     //?   matrix form      // space complexity = O(n^2)

    int adj[n + 1][n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1; // in weight => w
        adj[v][u] = 1; // in weight => w
    }
 
    // ?   adj list form   // space complexity = O(2E)   E = # edges

    vector <int> Adj [n+1];
    for( int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        Adj[u].push_back(v);   // in weighted graph pair<int,int>
        Adj[v].push_back(u);   //in weighted graph pair<int,int>
    }

    return 0;
}