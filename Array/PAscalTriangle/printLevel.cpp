// #include<bits/stdc++.h>
// using namespace std ; 
// #define pi 3.14
// #define ll long long
// #define limit(x) (x.begin(),x.end())


 

// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// int n;
// cin>>n;
// vector<int>temp;
// temp.push_back(1);
// int ss=1;
// n--;
// for(int i=0;i<n;i++){
//     ss=ss*(n-i);
//     ss=ss/(i+1);
//     temp.push_back(ss);
// }
// // temp.push_back(1);

// for(auto i:temp){
//     cout<<i<<" ";
// }
// return 0 ;
// }


#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define ll long long
#define limit(x) (x.begin(),x.end())


 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int n;
cin>>n;
n--;
vector<int>temp;
temp.push_back(1);
int ss=1;
for(int i=0;i<n;i++){
    ss=ss*(n-i);
    ss=ss/(i+1);
    temp.push_back(ss);

}

for(auto i:temp)cout<<i<<" ";cout<<endl;

return 0 ;
}