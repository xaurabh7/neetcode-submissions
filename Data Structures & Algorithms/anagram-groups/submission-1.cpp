class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map to group strings with the exact same character counts
        unordered_map<string, vector<string>> res;

        for (const string& s : strs) {
            // Count frequencies of lowercase English letters
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }

            // Construct a unique string key based on frequencies
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);
            }

            // Group the string under its key
            res[key].push_back(s);
        }

        // Collect all grouped sublists
        vector<vector<string>> result;
        for (auto& pair : res) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};