class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>>v;

        for(int i=0;i<points.size();i++){
            v.push_back({points[i][0],points[i][1]});
        }

        sort(v.begin(),v.end());
        if(v.size()==1) return 1;
        int i=0,j=1,ans=0;
        while(j<v.size()){

            if(v[j].first<=v[i].second and v[j].second>=v[i].first){
                if(v[i].second>v[j].second) i=j;
                j++;
                continue;
            }
            else{
                ans++;
                i=j;
                j++;
                
            }

        }
        if(i!=j) ans++;

        return ans;
    }
};
