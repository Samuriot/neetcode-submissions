class Solution {
public:
    // high level algorithm understanding
    // iterate through the array using two pointers
    // whenever the buying price is cheaper than the selling prices( l < r )
    // check if we can make more profit
    // if the buying price is not cheaper than the selling
    // then we move to a different buying price
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l = 0, r = 1;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) { // chance for profit here
                profit = max(profit, prices[r] - prices[l]);
            } else {
                l = r;
            }
            r++;
        }
        return profit;
    }
};
