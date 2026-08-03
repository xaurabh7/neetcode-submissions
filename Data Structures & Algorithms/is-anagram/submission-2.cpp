class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char,int> mpp1;
        map<char,int> mpp2;
        for(int i=0;i<s.size();i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        
        for (auto it : mpp1) {
            int key = it.first;
            int value = it.second;

            if (mpp2.find(key) == mpp2.end() || mpp2[key] != value) {
                
                return false;
            }
        }
        return true;
    }
};
