   string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    
    string prefix = strs[0];
    
    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            j++;
        }
        
        prefix.resize(j);
        
        if (prefix.empty()) {
            return "";
        }
    }
    
    return prefix;
    
}