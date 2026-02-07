// Kadane's Algorithm -> Maximum Subarray Sum
// We maintain a running sum and reset it when it becomes negative, 
// because a negative prefix can never contribute to a maximum subarray.

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int currSum = arr[0], maxSum = arr[0];
        for(int i=1; i<n; i++){
            currSum = max(arr[i], currSum+arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};