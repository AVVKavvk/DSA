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
    priority_queue<int> pq;                                        //*        max-heap
    priority_queue<int, vector<int>, greater<int>> pq1;           //*         min-heap

    pq.push(10);
    pq.push(0);
    pq.push(40);
    pq.push(-2);
    pq.push(210);
    pq1.push(10);
    pq1.push(0);
    pq1.push(40);
    pq1.push(-2);
    pq1.push(210);

    cout << " top element of pq: " << pq.top();
    nl;
    pq.pop();
    cout << " top element of pq: " << pq.top();
    nl;
    pq.pop();
    cout << " top element of pq: " << pq.top();
    nl;
    pq.pop();
    cout << " top element of pq: " << pq.top();
    nl;
    pq.pop();
    cout << " top element of pq: " << pq.top();
    nl;
    pq.pop();
    cout << " size of pq :" << pq.size() << endl;
    if (pq.empty())
        cout << " pq is empty " << endl;
    nl;
    nl;

    cout << " top element of pq1: " << pq1.top();
    nl;
    pq1.pop();
    cout << " top element of pq1: " << pq1.top();
    nl;
    pq1.pop();
    cout << " top element of pq1: " << pq1.top();
    nl;
    pq1.pop();
    cout << " top element of pq1: " << pq1.top();
    nl;
    pq1.pop();
    cout << " top element of pq1: " << pq1.top();
    nl;
    pq1.pop();
    cout << " size of pq1 :" << pq1.size() << endl;
    if (pq1.empty())
        cout << " pq1 is empty " << endl;
    nl;
    nl;
    return 0;
}