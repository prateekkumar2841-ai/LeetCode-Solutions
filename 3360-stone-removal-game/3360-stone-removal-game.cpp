class Solution {
public:
    bool canAliceWin(int n) {
        int take = 10, moves = 0;
        while (n >= take) {
            n -= take;
            take--;
            moves++;
        }
        return moves % 2 == 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna