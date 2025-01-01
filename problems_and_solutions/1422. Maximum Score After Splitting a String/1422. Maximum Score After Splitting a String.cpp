class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0, maxScore = 0;
        int leftZeros = 0, rightOnes = 0;

        // Count the total number of ones in the string
        for (char c : s) {
            if (c == '1') totalOnes++;
        }

        // Traverse the string and calculate the score for each split
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '0') leftZeros++;
            else rightOnes++;

            int score = leftZeros + (totalOnes - rightOnes);
            maxScore = max(maxScore, score);
        }

        return maxScore;
        
    }
};