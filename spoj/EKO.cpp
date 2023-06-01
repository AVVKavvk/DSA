#include <bits/stdc++.h>

using namespace std;
bool isPossibleSol(vector<long long int> tress, long long int m,long long int mid){
    long long int woodCollector=0;
    for(int i=0;i<tress.size();i++){
        if(tress[i]>=mid){
            woodCollector+=tress[i]-mid;
        }
    }
    return woodCollector>=m;
}
long long int showBladeHeight(vector<long long int> tress, long long int m)
{
    long long int s = 0, e,mid,ans=-1;
    e = *max_element(tress.begin(), tress.end());
    mid=s+(e-s)/2;
    while(s<=e){
        if(isPossibleSol(tress,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    long long int n, m;
    vector<long long int> tress;
    cin >> n >> m;
    while (n--)
    {
        long long int heigth;
        cin >> heigth;
        tress.push_back(heigth);
    }

    cout << showBladeHeight(tress, m);
    return 0;
}