class Solution {
public:
    string prefixToInfix(string s) {
        stack<string> val;
        for(int i = s.length() - 1; i >= 0; i--){
            char ch = s[i];
            if(isalnum(ch)) val.push(string(1, ch));
            else {
                if(val.size() < 2) return "";
                string a = val.top(); val.pop();
                string b = val.top(); val.pop();
                val.push("(" + a + string(1, ch) + b + ")");
            }
        }
        return val.empty() ? "" : val.top();
    }
};
