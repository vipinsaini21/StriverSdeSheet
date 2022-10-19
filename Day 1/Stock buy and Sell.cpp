class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minx=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            minx = min(minx, prices[i]);
            profit = max(profit, prices[i] - minx);
        }
        return profit;
    }
};