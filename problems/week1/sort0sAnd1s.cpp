#include <bits/stdc++.h>
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
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define vet vector<char>
using namespace std;
#define ve vector<int>
#define pu(n) push_back(n);

int main()
{
    ve a{0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1,0};
    int j = 0, start = 0, end = a.sz -1;
    while (j != end)
    {

        if (a[j] == 0)
        {
            swap(a[j], a[start]);
            j++;
            start++;
        }
        else
        {
            swap(a[j], a[end]);
            
            end--;
        }
    }

    for (auto v : a)
    {
        ps(v);
    }
    return 0;
}