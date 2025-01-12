class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if( i+1<=citations[i]){
                ans=i+1;
            }
        }
        return ans;
    }
};
