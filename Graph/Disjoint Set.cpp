class DisjointSet {
    vector<int> parent, rank;
public:
    DisjointSet(int n){
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int i) {
        if(i == parent[i]) return i;
        return parent[i] = find(parent[i]);
    }
    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);
        if(x_parent == y_parent) return;
        if(rank[x_parent] > rank[y_parent]) parent[y_parent] = x_parent;
        else if(rank[x_parent] < rank[y_parent]) parent[x_parent] = y_parent;
        else {
            parent[y_parent] = x_parent;
            rank[x_parent]++;
        }
    }
};