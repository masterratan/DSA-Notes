class Solution {
public:
    string postToInfix(string s) {
        stack<string> val;
        for(auto &ch: s){
            if(isalnum(ch)) val.push( string(1, ch) );
            else {
                string b = val.top(); val.pop();
                string a = val.top(); val.pop();
                val.push( "(" + a + string(1, ch) + b + ")" );
            }
        }
        return val.top();
    }
};
