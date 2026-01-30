Memset() Function
It is used to fill a block of memory with a particular value.

#include<cstring>
memset(variable_name, values, sizeof(variable_name));

int arr[5] = {-1}
Result: {-1,0,0,0,0}

memset(arr, -1, sizeof(a)) 
Result: {-1,-1,-1,-1,-1}

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
int idx = it - arr.begin();// index of upper bound