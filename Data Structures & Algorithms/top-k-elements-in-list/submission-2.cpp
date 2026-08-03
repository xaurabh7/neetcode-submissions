class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Count frequency of each element
        unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }

        // Step 2: Create buckets where index = frequency
        // Size is n + 1 because an element can appear up to n times
        vector<vector<int>> buckets(n + 1);
        for (auto& entry : countMap) {
            int num = entry.first;
            int freq = entry.second;
            buckets[freq].push_back(num);
        }

        // Step 3: Iterate from highest frequency (n) down to 1
        vector<int> result;
        for (int i = n; i > 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
