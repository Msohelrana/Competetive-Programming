class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v;
        k%=n;
        for(int i=n-k;i<n;i++){
             v.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++) v.push_back(nums[i]);
        nums=v;
    }
};