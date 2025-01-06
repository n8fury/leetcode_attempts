class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);

        // Left pass: Calculate the cost of moving balls from left to right
        int count = 0; // Number of balls encountered so far
        int ops = 0;   // Total operations for the current position
        for (int i = 0; i < n; i++) {
            answer[i] += ops;
            if (boxes[i] == '1') {
                count++;
            }
            ops += count; // Add the cost of moving all balls encountered so far
        }

        // Right pass: Calculate the cost of moving balls from right to left
        count = 0; // Reset the ball count
        ops = 0;   // Reset the operations
        for (int i = n - 1; i >= 0; i--) {
            answer[i] += ops;
            if (boxes[i] == '1') {
                count++;
            }
            ops += count; // Add the cost of moving all balls encountered so far
        }

        return answer;
    }
};