#include <bits/stdc++.h>
using namespace std;
bool isDigit(char ch){
    return ch >= '0' && ch <= '9';
}
int solve(int a, char opr, int b){
    if(opr == '+') return a + b;
    if(opr == '-') return a - b;
    if(opr == '*') return a * b;
    if(opr == '/') return a / b;
    return 0;
}
int main() {
    string s = "79+4*8/3-";
    stack<int> val;
    for(auto &ch: s){
        if(isDigit(ch)) val.push(ch - '0');
        else{ // ch is a symbol
            int b = val.top(); val.pop();
            int a = val.top(); val.pop();
            val.push(solve(a, ch, b));
        }
    }
    cout<<val.top();
    
    return 0;
}
