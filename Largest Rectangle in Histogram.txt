class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int nsi[n];
        nsi[n-1] = n;
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        int psi[n];
        psi[0] = -1;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            psi[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        int maxArea = 0;
        for(int i=0; i<n; i++){
            int area = arr[i] * (nsi[i] - psi[i] - 1);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};