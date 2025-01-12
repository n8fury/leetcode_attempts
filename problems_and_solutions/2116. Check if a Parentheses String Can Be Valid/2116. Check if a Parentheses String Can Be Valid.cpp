class Solution {
public:
    bool canBeValid(string s, string locked) {
        // If the length of s is odd, it's impossible to form valid parentheses
        if (s.length() % 2 != 0) {
            return false;
        }
        
        int balance = 0; // Tracks open-close balance
        int flexible = 0; // Tracks how many unlocked characters are available

        // Left-to-right pass: Ensure no excess closing parentheses
        for (int i = 0; i < s.length(); ++i) {
            if (locked[i] == '1') {
                balance += (s[i] == '(' ? 1 : -1);
            } else {
                flexible++;
            }
            // Check if we have more closing than opening + flexible characters
            if (balance + flexible < 0) {
                return false;
            }
        }

        balance = 0;
        flexible = 0;

        // Right-to-left pass: Ensure no excess opening parentheses
        for (int i = s.length() - 1; i >= 0; --i) {
            if (locked[i] == '1') {
                balance += (s[i] == ')' ? 1 : -1);
            } else {
                flexible++;
            }
            // Check if we have more opening than closing + flexible characters
            if (balance + flexible < 0) {
                return false;
            }
        }

        return true;
    }
};
