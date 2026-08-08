class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<int> hashSet;
        int maxCount = 0;
        int start = 0;
        for (int i = 0; i < n; i++) {
            while (hashSet.count(s[i])) {
                hashSet.erase(s[start]); 
                start++;                 
            }
            hashSet.insert(s[i]);
            maxCount = max(maxCount, i - start + 1);
        }
        return maxCount;      
    }
};
