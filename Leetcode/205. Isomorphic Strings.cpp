class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m,mp;
        for(int i=0;i<s.size();i++){
            if((m[s[i]] and m[s[i]]!=t[i]) or(mp[t[i]] and mp[t[i]]!=s[i])){
                return false;
            }
            else{

               m[s[i]]=t[i];
               mp[t[i]]=s[i];
            }
        }
        return true;
    }
};
