class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long option1 = 1LL * need1 * cost1 + 1LL * need2 * cost2;

        long long option2 = 1LL * min(need1, need2) * costBoth
                          + 1LL * max(0, need1 - need2) * cost1
                          + 1LL * max(0, need2 - need1) * cost2;

        long long option3 = 1LL * max(need1, need2) * costBoth;

        return min({option1, option2, option3});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna