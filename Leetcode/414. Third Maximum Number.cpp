class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++) st.insert(nums[i]);
        if(st.size()<3) return *(st.rbegin());
        return *(next(st.begin(),(st.size()-3)));
    }
};
