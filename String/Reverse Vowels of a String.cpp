class Solution {
public:
    bool isVowel(char a){
        if(a==97 || a==101 || a==105 || a==111 || a==117){
            return true;
        }
        if(a==65 || a==69 || a==73 || a==79 || a==85){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        //Two pointer approach
        int left=0,right=s.size()-1;
        while(left<right){
            while(left<right && !isVowel(s[left])){
                left++;
            }
            while(left<right && !isVowel(s[right])){
                right--;
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
//Time Complexity - O(N)
//Space Complexity - O(1)