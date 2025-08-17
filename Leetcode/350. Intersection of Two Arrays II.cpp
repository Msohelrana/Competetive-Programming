class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>one,two;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            one[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            two[nums2[i]]++;
        }
        for(auto [x,y]:one ){
            if(two[x]) {
                int n=min(y,two[x]);
                for(int i=0;i<n;i++) ans.push_back(x);
            }
        }
        return ans;
    }
};
