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
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int fib = fibonacci(n - 2) + fibonacci(n - 1);

    return fib;
}

void printArray(int arr[], int i, int n)
{

    if (i >= n)
    {
        return;
    }

    // *      method
    // printArray(arr, i++, n - 1);
    // cout << arr[n-1]<<" ";

    //* method  2

    cout << arr[i] << " ";
    // ?      error         printArray(arr, i++, n);
    // *         printArray(arr, ++i, n);
    printArray(arr, i + 1, n);
}

int maximumElement1(int arr[], int i, int n)
{

    if (i >= n)
    {
        return INT_MIN;
    }

    // int maxi = INT_MIN;
    int element = arr[i];

    return max(element, maximumElement1(arr, i + 1, n));
}

void maximumElement(int arr[], int i, int n, int &maxi)
{
    if (i >= n)
    {
        return;
    }

    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }

    maximumElement(arr, i + 1, n, maxi);
}

void minimumElement(int arr[], int i, int n, int &mini)
{

    if (i >= n)
    {

        return;
    }

    // if (arr[i] < mini)
    // {

    //     mini = arr[i];
    // }
    mini = min(mini, arr[i]);
    minimumElement(arr, i + 1, n, mini);
}

bool findChar(string s, int i, int n, char key)
{
    if (i >= n)
    {
        return false;
        // return -1;    //*  if we have to return index
    }

    if (s[i] == key)
    {
        return true;
        // return i;    //*  if we have to return index
    }

    return findChar(s, i + 1, n, key);
}

void allIndexOfFounrChar(string s, int i, int n, char key, vector<int>& v)
{

    if (i >= n)
    {
        return;
    }
    if (s[i] == key)
    {
        v.push_back(i);
    }

    return allIndexOfFounrChar(s, i + 1, n, key, v);
}




int main()
{

    int n;
    // cin >> n;
    // cout<<Factorial(n);

    // PrintCounting(n);

    //    cout<< Power(n,5);
    // cout << SumOfDigits(n);

    // int a = fibonacci(n);

    // cout<<a;

    // int arr[6] = {1, 778, -5, 5, 78, 9};
    // printArray(arr, 0, 6);
    // int maxi=INT_MIN;
    //    maximumElement(arr, 0, 6,maxi);

    //     cout<<maxi;

    // int mini = INT_MAX;
    // minimumElement(arr, 0, 6, mini);
    // cout << mini;

    string s = "vipin kumawat";

    char c;
    cin >> c;
    // cout<<findChar(s,0,s.length(),c);

    vector<int> v;
    allIndexOfFounrChar(s, 0, s.length(), c, v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}