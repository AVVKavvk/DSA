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

int getBinary(int n)
{
    int ans = 0;
    int i = 0, j = 0;
    while (n > 0)
    {
        int bit = n & 1;

        ans = ans + bit * pow(10, i++);

        n = n >> 1;
    }
    return ans;
}
int getBinary1(int n)
{
    int ans = 0;
    int i = 0, j = 0;
    while (n > 0)
    {
        int bit = n % 2;

        ans = ans + bit * pow(10, i++);

        n = n / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "emter n ";
    cin >> n;
    int binary = getBinary(n);
    // int binary = getBinary1(n);
    cout << binary << endl;
    return 0;
}