class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>mp;
        int ans,n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<=n;i++){
            if(!mp[i]) ans =i;
        }
        return ans;
    }
};
