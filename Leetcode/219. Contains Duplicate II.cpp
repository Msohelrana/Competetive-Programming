class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         int n=nums.size();
         map<int,int>mp;
         for(int i=0;i<n;i++){
            if(mp[nums[i]]){
                if(i-mp[nums[i]]+1<=k){
                    return true;
                }
                else{
                    mp[nums[i]]=i+1;
                }
            }
            else mp[nums[i]]=i+1;
         }

         return false;
    }
};
