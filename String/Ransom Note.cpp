class Solution {
public:
    bool canConstruct(string r, string m) {
        if(m.size()<r.size()){
            return false;
        }
        vector<int> fm(26,0);
        vector<int> fr(26,0);
        for(int i=0;i<m.size();i++){
            char temp=m[i];
            fm[temp-'a']++;
        }
        for(int i=0;i<r.size();i++){
            char temp=r[i];
            fr[temp-'a']++;
        }
        for(int i=0;i<26;i++){
            if(fr[i]>fm[i]){
                return false;
            }
        }
        return true;
    }
};