class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int ans=0;
        heights.push_back(0);
        
        for(int i=0;i<=n;i++){

            while(!st.empty() and heights[st.top()]>heights[i]){
                int t=st.top();
                int h=heights[t];
                st.pop();

                if(st.empty()){
                    ans=max(ans,h*i);
                }
                else{
                    int len=i-st.top()-1;
                    ans=max(ans,h*len);
                }
            }
            st.push(i);
           
        }
            
       
        return ans;
    }
};
