class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> hashSet;
        int maxCount = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-nums[i-1] == 1 ||nums[i]-nums[i-1] == 0 || i==0){
                hashSet.insert(nums[i]);
                count = hashSet.size();
            }
            else {
                 hashSet.clear();
                 hashSet.insert(nums[i]);
                 maxCount = max(maxCount,count);
                 count = 1;
            }

        }
        return max(maxCount,count);
        
    }
};
