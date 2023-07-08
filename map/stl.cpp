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

int main()
{
    unordered_map<string, int> mp;
    mp.insert({"vipin",100});
    pair<string,int> p=make_pair("srijan",101);
    mp.insert(p);
    
    mp.insert(make_pair("adarsh",102));

    mp["chaitnya"]=103;

    for(auto i:mp){
        cout<<i.first <<" -> "<<i.second<<endl;
    }

    cout<<endl;
    
    cout<< "vipin count is "<<mp.count("vipin")<<endl;

    if(mp.find("srijan") != mp.end()){
        cout<<"srijan found "<<endl;
    }
    else cout<<"srijan not find "<<endl;

    cout<<"size "<<mp.size()<<endl;

    cout<<mp["siddhant"]<<endl;         //*       important it's create a new entry into map with value is 0
 
     cout<<"size "<<mp.size()<<endl;




    return 0;
}