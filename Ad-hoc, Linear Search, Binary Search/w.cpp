#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), pre(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    // sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + v[i];
    }
    // printarr(pre);
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto it = lower_bound(pre.begin(), pre.end(), x);
        if (it != v.end()) {
            // cout << *it << endl;
            cout << it - pre.begin() << endl;
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    // cin>>t;
    while (t--) {
        // cout << "Case " << Case++ << ": ";
        solve();
    }
    return 0;
}