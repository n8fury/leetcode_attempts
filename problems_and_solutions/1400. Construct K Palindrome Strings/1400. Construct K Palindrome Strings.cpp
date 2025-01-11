class Solution {
public:
    bool canConstruct(string s, int k) {
        // If k is greater than the length of the string, it's impossible
        if (k > s.length()) {
            return false;
        }

        // Frequency count of characters
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Count characters with odd frequencies
        int oddCount = 0;
        for (int count : freq) {
            if (count % 2 != 0) {
                oddCount++;
            }
        }

        // If oddCount exceeds k, we cannot construct k palindromes
        return oddCount <= k;
    }
};
