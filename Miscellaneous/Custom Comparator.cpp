// Custom Comparator Function

static bool cmp(int a, int b) {
    return a > b; // descending order
}

static bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.first == b.first ? a.second > b.second : a.first > b.first;
}

static bool cmp(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) return a[1] < b[1];
    return a[0] < b[0];
}

// Very Important Note: Priority Queue works completely opposite.

struct cmp{
    bool operator()(ListNode *l1, ListNode *l2){
        return l1->val > l2->val; // ascending order
    }
};

priority_queue<ListNode*, vector<ListNode*>, cmp> pq;


