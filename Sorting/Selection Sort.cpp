class Solution {
public:
    vector<int> selectionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            int minIdx = i;
            int minEle = arr[i];
            for(int j=i+1; j<n; j++){
                if(arr[j] < minEle){
                    minEle = arr[j];
                    minIdx = j;
                }
            }
            swap(arr[i], arr[minIdx]);
        }
        return arr;
    }
};
