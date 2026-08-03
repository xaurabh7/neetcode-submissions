class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int post = 1;

        vector<int> output(n);
        
        for(int i=0;i<n;i++){
            output[i] = pre;
            pre *= nums[i];
        }

        for(int i=n-1;i>=0;i--){
            output[i] *= post;
            post *= nums[i];
        }
       

        return output;

    }
};
