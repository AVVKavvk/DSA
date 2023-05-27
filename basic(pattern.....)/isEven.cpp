#include <bits/stdc++.h>
#define pi 3.14
#define fl(a, b) for (int i = a; i < b; i++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define ps(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define p(a) std::cout << a;
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);
void isEven(int n)
{
    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
void isEven1(int n)
{
    if ((n & 1) == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    isEven(n);
    isEven1(n);
    return 0;
}