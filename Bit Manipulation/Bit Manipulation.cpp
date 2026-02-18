// Odd or even
return a&1;

// Power of 2 or not
return N & (N-1) == 0;

// Swap a & b
a = a^b
b = a^b
a = a^b

// Set k-th bit
N | (1<<k)

// Clear k-th bit
N & ~(1<<k)

// Toggle k-th bit
N ^ (1<<k)

// Remove the last set bit (rightmost)
N & (N-1)

// Count Set Bits
int cnt = 0;
while(n > 1){
    cnt += n&1;
    n >>= 1;
}
if(n == 1) cnt++;
return cnt;
