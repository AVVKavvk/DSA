class Solution {
public:

void maxProfitGiver(vector<int>& prices,int i,int& minPrice,int &maxProfit){

    if(i==prices.size()){
        return;
    }


    if(minPrice>prices[i]){
        minPrice=prices[i];
    }

    int todaysProfit=prices[i]-minPrice;
    if(todaysProfit>maxProfit){
        maxProfit=todaysProfit;
    }
    maxProfitGiver(prices,i+1,minPrice,maxProfit);
}
    int maxProfit(vector<int>& prices) {
        int maxProfit=INT_MIN;
        int minPrice=INT_MAX;

maxProfitGiver(prices,0,minPrice,maxProfit);
        return maxProfit;
    }
};