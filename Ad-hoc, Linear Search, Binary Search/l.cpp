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
    vector<int> v(n);
    vector<pair<int, int>> vp(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) {
            vp[i].first = v[i];
        } else {
            vp[i].first = max(v[i], vp[i - 1].first);
        }
        mp[v[i]] = i + 1;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            vp[i].second = v[i];
        } else {
            vp[i].second = min(v[i], vp[i + 1].second);
        }
    }
    int mx = INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        // cout << vp[i].first << " " << vp[i].second << endl;
        mx = max(mx, vp[i].first - vp[i + 1].second);
    }
    cout << mx << endl;

    // for (auto it : mp) {
    //     cout << it.first << " " << it.second << endl;
    // }
    // for (auto it : v) {
    //     cout << it << endl;
    // }
    // cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while (t--) {
        // cout << "Case " << Case++ << ": ";
        solve();
    }
    return 0;
}