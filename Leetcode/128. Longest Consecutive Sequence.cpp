class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]) continue;
            else{
                v.push_back(nums[i]);
                mp[nums[i]]++;
            }
        }
        int ans=0;
        int left=0,right=0;
        while(right<v.size()){
            if(right-left==v[right]-v[left]){
                ans=max(ans,right-left+1);
                right++;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};
