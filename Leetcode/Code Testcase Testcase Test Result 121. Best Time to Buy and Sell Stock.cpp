class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mxp=0,mnleft=prices[0];
       for(int i=1;i<prices.size();i++){
            int pr=prices[i]-mnleft;
            if(pr>mxp) mxp=pr;
            mnleft=min(mnleft,prices[i]);
       }
       return mxp; 
    }
};
