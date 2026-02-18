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
    string s = "-/*+79483";
    stack<int> val;
    for(int i=s.length()-1; i>=0; i--){
        char ch = s[i];
        if(isDigit(ch)) val.push(ch - '0');
        else{ // ch is a symbol
            int a = val.top(); val.pop();
            int b = val.top(); val.pop();
            val.push(solve(a, ch, b));
        }
    }
    cout<<val.top();
    
    return 0;
}
