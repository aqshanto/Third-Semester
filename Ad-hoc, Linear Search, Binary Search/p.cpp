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
    for (int i = 0; i < n; i++) cin >> v[i];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            mx = v[i];
        else {
            mx = max(mx, abs(v[i] - v[i - 1]));
        }
    }
    // cout << mx << endl;
    int cnt = mx;
    for (int i = 0; i < n; i++) {
        // cout << mx << " " << cnt << endl;
        if (i == 0) {
            if (mx == v[i]) {
                mx--;
            }
        } else if (mx == abs(v[i] - v[i - 1])) {
            mx--;
        } else if (mx < abs(v[i] - v[i - 1])) {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
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