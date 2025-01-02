class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        constexpr int MAX_N = 100005;
        bool is_vowel[256] = {};
        is_vowel['a'] = is_vowel['e'] = is_vowel['i'] = is_vowel['o'] = is_vowel['u'] = true;

        int n = words.size();
        vector<int> prefix(n + 1, 0);

        // Step 1: Precompute prefix sums
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + 
                            (is_vowel[words[i][0]] && is_vowel[words[i].back()]);
        }

        // Step 2: Process queries
        int q = queries.size();
        vector<int> ans(q);
        for (int i = 0; i < q; ++i) {
            int li = queries[i][0];
            int ri = queries[i][1];
            ans[i] = prefix[ri + 1] - prefix[li];
        }

        return ans;
    }
};
