class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> delta(n + 1, 0); // Create a difference array

        // Populate the difference array
        for (const auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            int value = (direction == 1) ? 1 : -1;
            delta[start] += value;
            delta[end + 1] -= value;
        }

        // Compute the cumulative shift
        int shift = 0;
        for (int i = 0; i < n; ++i) {
            shift += delta[i]; // Add the cumulative shift at index i
            shift = (shift % 26 + 26) % 26; // Normalize shift to be within [0, 25]
            s[i] = 'a' + (s[i] - 'a' + shift) % 26; // Apply the shift to the character
        }

        return s;
    }
};
