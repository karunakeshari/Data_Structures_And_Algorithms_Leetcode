class Solution {
public:
    bool isPalindrome(string str){
        for(int i=0;i<str.size();i++){
            if(str[i]!=str[str.size()-1-i]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        //Two Pointer Approach
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return isPalindrome(s.substr(i,j-i))||isPalindrome(s.substr(i+1,j-i));
            }
        }
        return true;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)