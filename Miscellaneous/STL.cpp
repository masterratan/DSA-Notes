// Memset() Function
// It is used to fill a block of memory with a particular value.

#include<cstring>
// memset(variable_name, values, sizeof(variable_name));

int arr[5] = {-1}
// Result: {-1,0,0,0,0}

memset(arr, -1, sizeof(a)) 
// Result: {-1,-1,-1,-1,-1}
_______________________________________________________________________________________________________________________

// Note 'lower_bound' & 'upper_bound' functions returns iterators, not index or value

// Lower Bound
auto it = lower_bound(arr.begin(), arr.end(), x);
if(it == arr.end()) return -1;
int val = *it; // value of lower bound
int idx = it - arr.begin();// index of lower bound

// Upper Bound
auto it = upper_bound(arr.begin(), arr.end(), x);
if(it == arr.end()) return -1;
int val = *it; // value of upper bound
int idx = it - arr.begin(); // index of upper bound
_______________________________________________________________________________________________________________________

// Character to string
string(1, ch) // means make a string of 'ch' character repeating 1 time

// isAlphanumeric (0-9, a-z, A-Z) but not symbols like $, *, ^
isalnum('a')  → true
isalnum('Z')  → true
isalnum('5')  → true
isalnum('+')  → false
isalnum('(')  → false

// Maximum element in an array
*max_element(arr.begin(), arr.end());

// Minimum element in an array
*min_element(arr.begin(), arr.end());