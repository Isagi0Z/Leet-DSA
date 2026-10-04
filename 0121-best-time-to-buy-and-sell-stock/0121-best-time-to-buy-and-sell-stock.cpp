class Solution {
public:
    int solve(vector<int>& prices, int i, int minPrice) {
        
        // Base case
        if (i == prices.size()) {
            return 0;
        }

        // Option 1: sell today
        int profit = prices[i] - minPrice;

        // Update minimum price
        minPrice = min(minPrice, prices[i]);

        // Option 2: skip today
        int skip = solve(prices, i + 1, minPrice);

        return max(profit, skip);
    }

    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        return solve(prices, 1, prices[0]);
    }
};