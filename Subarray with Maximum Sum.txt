class Solution {
public:
    vector<int> SubArrayWithMaximumSum(vector<int>& arr) {
        int n = arr.size();
        int currSum = arr[0], maxSum = arr[0];
        int start = 0, bestStart = 0, bestEnd = 0;
        for(int i=1; i<n; i++){
            if(arr[i] > currSum + arr[i]){ // new Subarray starts
                start = i;
                currSum = arr[i];
            } else { // old Subarray continues => Start is not changing
                currSum += arr[i];
            }
            if(currSum > maxSum){
                maxSum = currSum;
                bestStart = start;
                bestEnd = i;
            }
        }
        vector<int>ans;
        for(int i=bestStart; i<=bestEnd; i++) ans.push_back(arr[i]);
        return ans;
    }
};