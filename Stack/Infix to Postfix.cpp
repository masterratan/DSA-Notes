class Solution {
private:
    int priority(char ch){
        if(ch == '+' || ch == '-') return 1;
        if(ch == '*' || ch == '/') return 2;
        return 0; // for '('
    }
    string makePostfix(string a, char ch, string b){ // receives infix => a opr b
        return a + b + string(1, ch); // sends postfix => a b opr
    }
    void evaluate(stack<string> &val, stack<char> &op){
        string b = val.top(); val.pop();
        string a = val.top(); val.pop();
        char opr = op.top(); op.pop();
        val.push(makePostfix(a, opr, b));
    }
public:
    string infixToPostfix(string s) {
        stack<string> val;
        stack<char> op;
        for(auto &ch: s){
            if(isalnum(ch)) val.push(string(1, ch));
            else if(ch == '(') op.push(ch);
            else if(ch == ')'){
                while(!op.empty() && op.top() != '(') evaluate(val, op);
                op.pop(); // remove '('
            }
            else { // + - * /
                while(!op.empty() && op.top() != '(' && priority(ch) <= priority(op.top())) evaluate(val, op);
                op.push(ch);
            }
        }
        while(!op.empty()) evaluate(val, op);
        return val.top();
    }
};
