#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    vector<int> ans(2000, -1);
    for (int i = 1; i < 2000; i++)
    {
        if (ans[i] == -1 && (i % 3 == 0))
        {
            sum += i;
            ans[i] = 1;
        }
        if (ans[i] == -1 && (i % 5 == 0))
        {
            sum += i;
            ans[i] = 1;
        }
        if (ans[i] == -1 && (i % 7 == 0))
        {
            sum += i;
            ans[i] = 1;
        }
    }
    sum += 2000;
    cout << sum << endl;
    
    return 0;
}