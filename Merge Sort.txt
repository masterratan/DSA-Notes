class Solution {
public:
    void merge(vector<int> &arr, int si, int mid, int ei){
        vector<int> temp;
        int i = si, j = mid+1;
        while(i <= mid && j <= ei){
            if(arr[i] <= arr[j]) temp.push_back(arr[i++]);
            else temp.push_back(arr[j++]);
        }
        while(i <= mid) temp.push_back(arr[i++]);
        while(j <= ei) temp.push_back(arr[j++]);

        for(int i=0; i<temp.size(); i++) arr[si + i] = temp[i];
    }
    void mergeSortA(vector<int> &arr, int si, int ei){
        if(si < ei){
            int mid = si + (ei-si)/2;
            // left
            mergeSortA(arr, si, mid);
            // right
            mergeSortA(arr, mid+1, ei);
            // merge
            merge(arr, si, mid, ei);
        }
    }
    vector<int> mergeSort(vector<int>& arr) {
        mergeSortA(arr, 0, arr.size()-1);
        return arr;
    }
};
