class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>r,m;

        for(int i=0;i<ransomNote.size();i++){
            r[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
             m[magazine[i]]++;
        }

        for(auto it:r){
            if(r[it.first]> m[it.first]){
                return false;
            }
        }

        return true;
    }
};
