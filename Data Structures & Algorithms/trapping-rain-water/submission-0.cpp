class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int total = 0;
        int maxL=height[left];
        int maxR=height[right];
        while(left<=right){

            if(maxL>maxR) {
                 maxR=max(maxR,height[right]);
                total += maxR - height[right];
                
               
                right--;
            }
            else {
                maxL=max(maxL,height[left]);
                total += maxL - height[left];
                
                left++;
            }
        }

        return total;
        
    }
};
