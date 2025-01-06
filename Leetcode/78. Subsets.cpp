class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int s_sz=1<<n;  //2^n numbers os subsets;
        vector<vector<int>>subsets;
        
        for(int mask=0;mask<s_sz;mask++){
            vector<int>subset;
            for(int i=0;i<n;i++){
                if(mask&(1<<i)){
                    subset.push_back(nums[i]);
                }
            }
            subsets.push_back(subset);
        }
        
        
        return subsets;
    }
};
