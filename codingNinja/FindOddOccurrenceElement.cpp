#include <bits/stdc++.h> 
int findOdd(int * a,int n)
{
unordered_map<int,int> hash;

for(int i=0;i<n;i++){
    hash[a[i]]++;
}
for(int i=0;i<n;i++){
    if(hash[a[i]]%2!=0){
        return a[i];
    }
}
}

//* method 2       using             XOR

int ans=0;
for(int i=0;i<n;i++){
    ans=ans^a[i];
}

return ans;