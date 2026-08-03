

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(),nums.end());
       int counter = 0;
       for(int i=0; i<n;i++) {
         if(i>0 && (nums[i]==nums[i-1])){
            return true;
         }
       }

       return false;
    }
};