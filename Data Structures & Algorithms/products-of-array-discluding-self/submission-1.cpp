class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int mul = 1; 
        int zero_count = 0;
        for( int num : nums){
            if( num == 0){
                zero_count++;
            }

            if( num != 0){
                mul = mul*num;
            }
        }

        vector<int> output(n);

        for(int i=0;i<n;i++){
            if(zero_count == 0){
                output[i] = mul/nums[i];
            }

            else if(zero_count == 1){
                if(nums[i]==0){
                    output[i] = mul;
                    break;
                }
                
            }

            else break;
        }

        return output;

    }
};
