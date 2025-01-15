class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int>st;
        int ans=0,left=0;
        
        for(int right=0;right<s.size();){
            auto it=st.find(s[right]);

            if(it==st.end()){
                ans=max(ans,right-left+1);
                st.insert(s[right]);
                right++;
                
                
            }
            else{

                st.erase(s[left]);

                left++;
            }
        }
        return ans;
    }
};
