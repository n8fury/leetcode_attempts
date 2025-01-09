class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int len = pref.size();
        
        for (const string& word : words) {
            // Check if pref is a prefix of the current word
            if (word.substr(0, len) == pref) {
                ++count;
            }
        }
        
        return count;
    }
};
