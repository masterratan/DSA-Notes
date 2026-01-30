// STL:-
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
______________________________________________________

// Code:-

// Lower Bound
// smallest element >= x
class Solution {
  public:
    int lowerBound(vector<int>& arr, int x) {
        int n = arr.size();
        int lo = 0;
        int hi = n;
        while(lo < hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] < x) lo = mid+1;
            else hi = mid;
        }
        return lo;
    }
};

// Upper Bound
// smallest element > x
class Solution {
  public:
    int upperBound(vector<int>& arr, int x) {
        int n = arr.size();
        int lo = 0;
        int hi = n;
        while(lo < hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] <= x) lo = mid+1;
            else hi = mid;
        }
        return lo;
    }
};
