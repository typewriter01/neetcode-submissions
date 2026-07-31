class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int buy=0, sell=0;
        int maxprofit=0;
        for(int i=0; i<n;i++){
            if(prices[i]<prices[buy]){
                buy=i;
                sell=i;
            }
            if(prices[i]>prices[sell]){
                sell=i;
            }
            maxprofit = max(maxprofit, (prices[sell]-prices[buy]));
        }
        return maxprofit;
    }
};
