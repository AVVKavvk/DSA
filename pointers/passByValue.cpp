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

void utils(int *p)
{

    // ? p=p+1;

    *p = *p + 1;
}

void utils2(int **p)
{

    // ? p = p + 1;

    // *p=*p+1;

    **p = **p + 1;
}
int main()
{
    int a = 5;
    int *p = &a;
    // cout<<"before"<<endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // utils(p);
    // utils(p);
    // cout<<"after"<<endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;

    int **q = &p;
    cout << "before" << endl;
    cout << "value of a: " << a << endl;
    cout << "value at *p: " << *p << endl;
    cout << "value at p: " << p << endl;
    cout << "value at q: " << q << endl;
    cout << "value at *q: " << *q << endl;
    cout << "value at **q: " << **q << endl;
    utils2(q);
    cout << "after" << endl;
    cout << "value of a: " << a << endl;
    cout << "value at *p: " << *p << endl;
    cout << "value at p: " << p << endl;
    cout << "value at q: " << q << endl;
    cout << "value at *q: " << *q << endl;
    cout << "value at **q: " << **q << endl;
    return 0;
}