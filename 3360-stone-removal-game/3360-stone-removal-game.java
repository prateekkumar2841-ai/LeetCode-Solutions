class Solution {
    public boolean canAliceWin(int n) {
        int move = 10;
        int turn = 0;
        while(n >= move){
            n -= move;
            move--;
            turn++;
        }
        return turn % 2 == 1;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna