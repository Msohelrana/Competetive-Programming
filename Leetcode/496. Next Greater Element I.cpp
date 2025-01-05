class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        map<int,int>mp;
        vector<int>nge(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            mp[nums2[i]]=i;
            while(!st.empty() and nums2[st.top()]<nums2[i]){
                nge[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            nge[st.top()]=-1;
                st.pop();
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            if(nge[mp[nums1[i]]]==-1) ans.push_back(-1);
            else ans.push_back(nums2[nge[mp[nums1[i]]]]);
        }

        return ans;

    }
};
