class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> profit(prices.size(), 0);
        int max = 0;
        for(int i = prices.size()-1;i>=0;i--){
            for(int j = i; j<prices.size();j++){

               profit[i] = std::max(profit[i], std::max((prices[j]-prices[i])+profit[j], profit[j])); 
            }
            max = std::max(profit[i], max);
        }

        return max;
    }
};