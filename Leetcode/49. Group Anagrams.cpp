class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        for(auto s:mp){
            vector<string>temp;
            for(int i=0;i<s.second.size();i++){
                temp.push_back(s.second[i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
