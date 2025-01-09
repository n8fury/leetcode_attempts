class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Check if words[i] is both a prefix and suffix of words[j]
                if (words[j].substr(0, words[i].size()) == words[i] &&
                    words[j].substr(words[j].size() - words[i].size()) == words[i]) {
                    ++count;
                }
            }
        }
        
        return count;
    }
};