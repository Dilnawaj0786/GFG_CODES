class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int profit = 0;
        int buy = prices[0];
        for(int i =1;i<prices.size();i++){
            if(prices[i] > buy){
                int current_profit = prices[i]-buy;
                profit = max(profit,current_profit);
            }
            buy = min(buy,prices[i]);
        }
        return profit;
    }
};
