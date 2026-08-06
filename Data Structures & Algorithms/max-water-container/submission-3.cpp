class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int right = n-1;
        int left = 0;
        int maxAmount = 0;

        while(right > left){
            
            int amount = min(heights[left],heights[right]) * (right-left);
            maxAmount = max(maxAmount,amount);
            if(heights[right]>=heights[left]){
                left++;
            }
            else{
                right--;
            }
        }

        return maxAmount;
        
    }
};
