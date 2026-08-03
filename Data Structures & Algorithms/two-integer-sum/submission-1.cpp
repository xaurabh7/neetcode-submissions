class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> hash;
        for(int i=0; i<n;i++){
            int remain = target-nums[i];
            if(hash.find(remain) != hash.end()){
                return {hash[remain],i};
            }
            hash[nums[i]] = i;
        }

        return {};
        
    }
};
