class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<int> hashSet;
        int count = 0;
        int maxCount = 0;
        int start = 0;
        for (int i = 0; i < n; i++) {
    // While the character s[i] is already in the set, 
    // shrink the window from the left
    while (hashSet.count(s[i])) {
        hashSet.erase(s[start]); // 1. Remove character at the left pointer
        start++;                 // 2. Move left pointer forward
    }

    // Now s[i] is guaranteed not to be in the set
    hashSet.insert(s[i]);

    // Update maxCount with the current window length (i - start + 1)
    maxCount = max(maxCount, i - start + 1);
}
        return maxCount;      
    }
};
