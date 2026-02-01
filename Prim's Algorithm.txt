class Solution{
public:
    // Prim's Algorithm
    typedef pair<int,int> P; // wt, node
    int spanningTree(int V, vector<vector<int>> adj[]) {
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, 0});

        vector<bool> inMST(V, false);
        int sum = 0;

        while(!pq.empty()){
            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if(inMST[node] == true) continue;
            inMST[node] = true;
            sum += wt;

            for(auto &v : adj[node]){
                int ngbr = v[0];
                int ngbr_wt = v[1];
                if(inMST[ngbr] == false){
                    pq.push({ngbr_wt, ngbr});
                }
            }
        }
        return sum;
    }
};
