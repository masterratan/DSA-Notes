class DisjointSet {
public:
    vector<int> parent, rank, size;
    DisjointSet(int n) {
        parent.resize(n);
        for(int i=0; i<n; i++) parent[i] = i;
        rank.resize(n, 0);
        size.resize(n, 1);
    }

    int find(int node) {
        if(node == parent[node]) return node;
        return parent[node] = find(parent[node]);
    }

    void unionByRank(int x, int y) {
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

    void unionBySize(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);
        if(x_parent == y_parent) return;
        if(size[x_parent] >= size[y_parent]){
            parent[y_parent] = x_parent;
            size[x_parent] += size[y_parent];
        }
        else {
            parent[x_parent] = y_parent;
            size[y_parent] += size[x_parent];
        }
    }

    bool areConnected(int x, int y) {
        return find(x) == find(y);
    }
};
