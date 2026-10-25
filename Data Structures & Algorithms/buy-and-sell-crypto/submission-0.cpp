class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int l = 0, end = prices.size(), profit = 0;
        for(int r = 1;r<end;r++){
            profit = max(profit, prices[r]-prices[l]);
            if(prices[l]>=prices[r]){
                l = r;
            }
        }
        return profit;
    }
};
