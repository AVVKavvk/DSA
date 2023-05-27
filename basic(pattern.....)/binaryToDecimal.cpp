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

int getDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int deci = n % 10;
        ans = ans + deci * pow(2, i++);
        n = n / 10;
    }
    return ans;
}
int getDecimal1(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int deci = n % 10;
        ans = ans + (deci<<i);
        // cout<<(deci<<i);
        i++;
        n = n / 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    // int decimal = getDecimal(n);
    int decimal = getDecimal1(n);
    cout << decimal << endl;
    return 0;
}