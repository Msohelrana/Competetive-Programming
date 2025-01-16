class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>pts;
        unordered_map<string,char>stp;
        vector<string>words;
        string word;
        istringstream iss(s);
        while(iss >> word){
            words.push_back(word);
        }
        if(words.size()!=pattern.size()) return false;

        for(int i=0;i<words.size();i++){
             if((pts.count(pattern[i]) and pts[pattern[i]]!=words[i]) or (stp.count(words[i]) and stp[words[i]]!=pattern[i])){
                return false;
             }
             else{
                pts[pattern[i]]=words[i];
                stp[words[i]]=pattern[i];
             }
        }


        return true;
    }
};
