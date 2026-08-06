class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int right = n-1;
        int left = 0;
        int maxAmount = 0;
        if(heights.empty()){
            return maxAmount;
        }
        while(right > left){
            int height = heights[right] > heights[left] ? heights[left]:heights[right];
            int width = right - left;
            int amount = height * width;
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
