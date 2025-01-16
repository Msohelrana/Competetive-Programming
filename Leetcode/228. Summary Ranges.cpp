class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int l=0,r=1;
        vector<string>v;
        if(nums.size()==0) return v;
        while(r<nums.size()){
            if(nums[r]!=nums[r-1]+1){
                string s=to_string(nums[l]);
               
                if(r-1!=l){
                    s+="->"+to_string(nums[r-1]);
                }
                v.push_back(s);
                l=r;
            }
            r++;
        }
        string s=to_string(nums[l]);
               
        if(r-1!=l){
            s+="->"+to_string(nums[r-1]);
        }
        v.push_back(s);
        

        return v;
    }
};
