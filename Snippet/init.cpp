#include <bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second
#define MP make_pair
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

typedef vector<int> vi;
typedef pair<int,int> pi;

const int MOD = 1e9+7;
const int INF = 1e9;
const long long LINF = 1e18;
const long double PI = acos(-1.0L);

int d[] = {0,1,0,-1,0};
int dx[] = {0,1,1,1,0,-1,-1,-1};
int dy[] = {1,1,0,-1,-1,-1,0,1};

double power(double x, int n) {
    long binForm = n;
    if (binForm < 0) {
        binForm *= -1;
        x = 1 / x;
    }
    double ans = 1;
    while (binForm > 0) {
        if (binForm & 1) ans *= x;
        x *= x;
        binForm >>= 1;
    }
    return ans;
}

void solve() {
    

    cout << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}