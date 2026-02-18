#include <bits/stdc++.h>
using namespace std;
bool isDigit(char ch){
    return ch >= '0' && ch <= '9';
}
int priority(char ch){
    if(ch == '+' || ch == '-') return 1;
    if(ch == '*' || ch == '/') return 2;
    return 0; // for '('
}
int solve(int a, char opr, int b){ // a opr b
    if(opr == '+') return a + b;
    if(opr == '-') return a - b;
    if(opr == '*') return a * b;
    if(opr == '/') return a / b;
    return 0;
}
void evaluate(stack<int> &val, stack<char> &op){
    int b = val.top(); val.pop();
    int a = val.top(); val.pop();
    char opr = op.top(); op.pop();
    val.push(solve(a, opr, b));
}
int main() {
    string s = "1+(2+3-1)*6/4+3";
    stack<int> val;
    stack<char> op;
    for(auto &ch: s){
        if(isDigit(ch)) val.push(ch - '0');
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
    cout<<val.top();
    
    return 0;
}
