class Solution {
public:
    vector<int> bubbleSort(vector<int>& arr) {
        int n = arr.size();
        int k = n-1;
        while(k--){
            bool flag = false;
            for(int i=0; i<n-i-1; i++){
                if(arr[i] > arr[i+1]){
                    swap(arr[i], arr[i+1]);
                    flag = true;
                }
            }
            if(!flag) break;
        }
        return arr;
    }
};
