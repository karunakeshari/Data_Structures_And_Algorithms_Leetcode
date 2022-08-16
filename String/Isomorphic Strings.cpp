class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //one to one mapping
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        int i=0;
        while(i<s.size()){
            if((m1.find(s[i])==m1.end())&&(m2.find(t[i])==m2.end())){
                m1[s[i]]=t[i];
                m2[t[i]]=s[i];
            }
            i++;
        }
        string temp="";
        for(i=0;i<s.size();i++){
            if(m1.find(s[i])==m1.end()){
                return false;
            }
            temp+=m1[s[i]];
        }
        if(temp==t){
            return true;
        }
        return false;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(N)