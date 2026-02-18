class Solution {
public:
    string prefixToPostfix(const string& s) {
        stack<string> val;
        for(int i = s.length() - 1; i >= 0; i--){
            char ch = s[i];
            if(isalnum(ch)) val.push(string(1, ch));
            else {
                if(val.size() < 2) return "";
                string a = val.top(); val.pop();
                string b = val.top(); val.pop();
                val.push(a + b + string(1, ch));
            }
        }
        return val.empty() ? "" : val.top();
    }
};
