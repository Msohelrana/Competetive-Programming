class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si=0,n=s.size();

        for(int i=0;i<t.size();i++){
            if(t[i]==s[si]){
                n--;
                si++;
            }
        }
        return n==0;
    }
};
