class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size(),ans=0;
        int i=0,j=n-1;
        while(i<j){
            int area=min(height[i],height[j])*(j-i);
            ans=max(ans,area);
            if(height[i]<height[j]){
                i++;
            }
            else if(height[i]>height[j]) j--;
            else {
                i++;
                j--;
            }

            
        }
        return ans;
    }
};
