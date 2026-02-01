// Moore Voting Algorithm
// To find the majority element (that appears more than ⌊n / 2⌋ times)
// Applicable only when majority element exists

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int freq = 0, ans = 0;
        for(auto el : arr){
            if(freq == 0) ans = el;
            if(el == ans) freq++;
            else freq--;
        }
        return ans;
    }
};