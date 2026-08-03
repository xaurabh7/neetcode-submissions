class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        map<char, int> mpp1;
        map<char, int> mpp2;
        
        for (int i = 0; i < s.size(); i++) {
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        
        for (auto it : mpp1) {
            char key = it.first;
            int value = it.second;
            if (mpp2.find(key) == mpp2.end() || mpp2[key] != value) {
                return false;
            }
        }
        
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<bool> visited(n, false); // Keeps track of already grouped strings

        for (int i = 0; i < n; i++) {
            // Skip if this string has already been included in a group
            if (visited[i]) continue;

            vector<string> ds;
            ds.push_back(strs[i]); // Add the current starting string
            visited[i] = true;     // Mark it as visited

            for (int j = i + 1; j < n; j++) {
                if (!visited[j] && isAnagram(strs[i], strs[j])) {
                    ds.push_back(strs[j]);
                    visited[j] = true; // Mark matching anagram as visited
                }
            }

            ans.push_back(ds);
        }

        return ans;
    }
};
