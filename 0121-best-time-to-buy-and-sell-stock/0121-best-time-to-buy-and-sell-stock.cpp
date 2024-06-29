class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

    int BP = prices[0];
    int SP, profit;
    int finalprofit = 0;

    for (size_t i = 1; i < prices.size(); ++i) {
        SP = prices[i];
        profit = SP - BP;

        if (profit > 0) {
            finalprofit = max(finalprofit, profit);
        }

        BP = min(SP, BP);
    }

    cout << "\nFinal profit: " << finalprofit << endl;
    return finalprofit;
    }
};