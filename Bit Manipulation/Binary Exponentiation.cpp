// Binary Exponentiation
// It is used since the in-built pow() function stores numbers in doubles and there is precesion error in double data types for larger numbers.

// Recursive Code
class Solution {
public:
    double power(double x, long long n){
        if(n == 0) return 1.0;
        double res = power(x, n/2);
        return n&1 ? x*res*res : res*res;
    }
    double myPow(double x, int n) {
        long long exp = n;
        if(exp < 0){
            exp *= -1;
            x = 1/x;
        }
        return power(x, exp);
    }
};

// Iterative Code
class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n; // binary form
        if(binForm < 0){
            binForm *= -1;
            x = 1/x;
        }
        double ans = 1;
        while(binForm > 0){
            if(binForm % 2 == 1) ans *= x;
            x *= x;
            binForm /= 2;
        }
        // Or, by using Bit Manipulation
        // while(binForm > 0){
        //     if(binForm & 1) ans *= x;
        //     x *= x;
        //     binForm >>= 1;
        // }
        return ans;
    }
};