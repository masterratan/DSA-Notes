class Solution {
public:
    int partition(vector<int> &arr, int si, int ei){
        int idx = si-1, pivot = arr[ei];
        for(int j=si; j<ei; j++){
            if(arr[j] < pivot){
                idx++;
                swap(arr[idx], arr[j]);
            }
        }
        idx++;
        swap(arr[idx], arr[ei]);
        return idx;
    }
    void quickSortA(vector<int> &arr, int si, int ei){
        if(si < ei){
            int pivIdx = partition(arr, si, ei);
            // left
            quickSortA(arr, si, pivIdx-1);
            // right
            quickSortA(arr, pivIdx+1, ei);
        }
    }
    vector<int> quickSort(vector<int>& arr) {
        quickSortA(arr, 0, arr.size()-1);
        return arr;
    }
};
