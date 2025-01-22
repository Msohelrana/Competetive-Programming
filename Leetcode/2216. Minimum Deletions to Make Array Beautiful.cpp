class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int count=0,i=0;

        if(n==0) return 0;

        while(i+1<n){
            int temp=0;
            if((i+count)%2==0){
                if(nums[i]==nums[i+1]){
                   count++;
                }
            }
            i++;
        }
        if((n-count)%2==0) return count;
        else return count+1;
    }
};
