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

class A
{

protected:
    int a;

public:
    string name;
};

class B : public A // *               single inheritence
{
public:
    string r;
    B(int a, string name)
    {
        this->a = a;
        this->name = name;
    }

    int geta()
    {
        return a;
    }
};


int main()
{

    B *b = new B(100, "vipin");

    cout<<b->name;
    nl;
    cout<<b->geta();

    // C *c = new C();

    // cout<<c->geta();

    // cout << c->r;

    return 0;
}