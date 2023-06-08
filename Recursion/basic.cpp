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

int Factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int ans = n * Factorial(n - 1);

    return ans;
}

void PrintCounting(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    PrintCounting(n - 1);
}

int Power(int n, int a)
{
    if (a == 0)
    {
        return 1;
    }

    int ans = n * Power(n, a - 1);

    return ans;
}

int SumOfDigits(int n)
{
    if (n < 10 && n > 0)
    {
        return n;
    }

    int digit = n % 10;
    n /= 10;
    int ans = digit + SumOfDigits(n);

    return ans;
}

int fibonacci(int n)
{
   if(n==1){
    return 0;
   }
   if(n==2){
    return 1;
   }

    int fib = fibonacci(n - 2) + fibonacci(n - 1);
    
    return fib;
}

int main()
{

    int n;
    cin >> n;
    // cout<<Factorial(n);

    // PrintCounting(n);

    //    cout<< Power(n,5);
    // cout << SumOfDigits(n);

    int a = fibonacci(n);

    cout<<a;
    return 0;
}