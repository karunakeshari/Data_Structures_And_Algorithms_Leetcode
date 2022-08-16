class Solution {
public:
    bool wordPattern(string pattern, string s) {
        //creating list of string from s
        vector<string> words;
        string temp="";
        int i=0;
        while(i<s.size()){
            temp="";
            while((i<s.size())&&(s[i]!=' ')){
                temp+=s[i];
                i++;
            }
            words.push_back(temp);
            i++;
        }
        if(words.size()!=pattern.size()){
            return false;
        }
        unordered_map<string,char> mp;
        unordered_map<char,string> ms;
        for(int i=0;i<words.size();i++){
            if((mp.find(words[i])==mp.end())&&(ms.find(pattern[i])==ms.end())){
                mp[words[i]]=pattern[i];
                ms[pattern[i]]=words[i];
            }
        }
        string check="";
        for(int i=0;i<words.size();i++){
            if(mp.find(words[i])==mp.end()){
                return false;
            }
            check+=mp[words[i]];
        }
        if(check==pattern){
            return true;
        }
        return false;
    }
};