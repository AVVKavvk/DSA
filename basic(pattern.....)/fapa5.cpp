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
//                                                 1
//                                                 2*3
//                                                 4*5*6
//                                                 7*8*9*10
//                                                 7*8*9*10
//                                                 4*5*6
//                                                 2*3
//                                                 1

int main()
{

    int n = 4;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if ( j == i)
                cout << k++;
            else
            {
                cout << k++ << "*";
            }
        }

        cout << endl;
    }
    int start=k-n;

for(int i=0;i<n;i++){
    int k=start;
    for(int j=0;j<n-i;j++){
        if(j==n-i-1){
            cout<<k;
        }
        else
        cout<<k<<"*";
        k++;
    }
    start=start-(n-i-1);
    cout<<endl;
}
    return 0;
}