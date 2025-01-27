#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//
int n, m;
vector<int> v(1000);

bool iscontain(int mid) {
    int cont = 1, sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] <= mid) {
            if (sum + v[i] <= mid) {
                sum += v[i];
            } else {
                cont++;
                sum = v[i];
            }
        } else {
            return false;
        }
    }
    if (cont > m) return false;
    return true;
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> v[i];
    int lo = 0, hi = 1e9 + 10, ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        // cout << lo << " " << hi << " " << mid << " ";
        if (iscontain(mid)) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
            ans = lo;
        }
        // cout << ans << endl;
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while (t--) {
        cout << "Case " << Case++ << ": ";
        solve();
    }
    return 0;
}