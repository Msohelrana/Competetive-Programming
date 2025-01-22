class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int prefixSum[n];
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        int ans=0;

        for(int i=0;i<n;i++){
            int st=max(0,i-nums[i]);
            int end=i;
            if(st==0){
                ans+=prefixSum[end];
            }
            else{
                ans+=(prefixSum[end]-prefixSum[st-1]);
            }
        }
        return ans;
    }
};
