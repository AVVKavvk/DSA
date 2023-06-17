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
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    int sum(int a, float b)
    {

        cout << "float" << endl;
        return a + b;
    }
    int sum(int a, double b)

    {
        cout << "double" << endl;

        return a + b;
    }
};
int main()
{
    A *a = new A;

    cout << a->sum(10, 20) << endl;
    cout << a->sum(10, 12, 14) << endl;
    cout << a->sum(10, 5.2f) << endl;
    cout << a->sum(10, 5.2) << endl;

    return 0;
}