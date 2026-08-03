class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string s="";
        for(string str : strs){
            s += to_string(str.size());
            s +="#";
            s += str;
            
        }

        return s;

    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> strs;

        while(i<s.size()){
            int hash_pos = s.find('#', i);
            int len = stoi(s.substr(i, hash_pos - i));
            string str = s.substr(hash_pos + 1, len);
            strs.push_back(str);
            i = hash_pos + 1 + len;
        }

        return strs;
    }
};
