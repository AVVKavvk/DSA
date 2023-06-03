class Solution {
public:
    int findMinDifference(vector<string>& s) {
        vector <int> minutes;

for(int i=0;i<s.size();i++){
    string str=s[i];
    int hour=stoi(str.substr(0,2));
    int minute=stoi(str.substr(3,2));
    int totalMinutes=hour*60+minute;
    minutes.push_back(totalMinutes);
}
sort(minutes.begin(),minutes.end());
int mini=INT_MAX;
int n=minutes.size();

for(int i=0;i<n-1;i++){
    int diff=minutes[i+1]-minutes[i];
    mini=min(mini,diff);
}

int last1=minutes[0]+1440-minutes[n-1];
int last2= minutes[n-1]-minutes[0];
int last=min(last1,last2);
mini=min(last,mini);
return mini;
    }
};