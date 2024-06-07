// #include<bits/stdc++.h>
// using namespace std ; 
// #define pi 3.14
// #define ll long long
// #define limit(x) (x.begin(),x.end())


 

// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);


// ;
// }vector<vector<int>>ans;

// int r;
// cin>>r;

// for(int i=0;i<r;i++){
// vector<int>temp;
// temp.push_back(1);
// int ss=1;
// int n=i;
// for(int j=0;j<n;j++){
//     ss=ss*(n-j);
//     ss=ss/(j+1);
//     temp.push_back(ss);
// }
// ans.push_back(temp);
// }

// for(auto i:ans){
//     for(auto j:i){
//         cout<<j<<" ";
//     }
//     cout<<endl
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

int r;
cin>>r;

vector<vector<int>>ans;

for(int i=0;i<r;i++){

    vector<int>temp;
    temp.push_back(1);
    int ss=1;
    for(int j=0;j<i;j++){
        ss=ss*(i-j);
        ss=ss/(j+1);
        temp.push_back(ss);
    }
    ans.push_back(temp);
}

for(auto i:ans){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0 ;
}