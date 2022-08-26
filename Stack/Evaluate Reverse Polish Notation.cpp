class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sta;
        int first,second,res;
        for(auto x:tokens){
            if(x=="+" || x=="-" || x=="*" || x=="/"){
                second=sta.top();
                sta.pop();
                first=sta.top();
                sta.pop();
                res= x=="+"?first+second:x=="-"?first-second:x=="*"?first*second:first/second;
                sta.push(res);
            }
            else{
                sta.push(stoi(x));
            }
        }
        return sta.top();
    }
};
//Time Complexity-O(N)
//Space Complexity-O(N)