class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0,n;
        n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]==0) z++;
            else v.push_back(nums[i]);
        }
        while(z--) v.push_back(0);
        for(int i=0;i<n;i++) nums[i]=v[i];
    }
};
