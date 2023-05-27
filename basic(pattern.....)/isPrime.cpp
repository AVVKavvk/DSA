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
void isPrime(int n)
{
    int p = sqrt(n);
    int c=0;
    for (int i = 2; i <= p; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
        
    }
    if(c==0){
         cout << n << " is prime" << endl;
    }
    else{
        cout << n << " is not prime" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
    isPrime(i);
    }
    
    return 0;
}