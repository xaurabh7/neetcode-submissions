class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> hashMap;
        
        for(int num:nums){
            hashMap[num]++;
        }
         
        vector<pair<int, int>> freqList;
        for(auto it:hashMap){
            freqList.push_back({it.second, it.first});
        }

        sort(freqList.rbegin(), freqList.rend());

        vector<int> result;
        for (int i = 0; i < k ; i++) {
            result.push_back(freqList[i].second);
        }

        return result;
        
    }
};
