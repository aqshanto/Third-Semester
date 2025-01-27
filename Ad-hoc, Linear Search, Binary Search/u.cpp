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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while (q--) {
        int ll, hl;
        cin >> ll >> hl;
        auto lwb = lower_bound(v.begin(), v.end(), ll);
        if (lwb != v.end()) {
            // cout << lwb - v.begin() << " ";
        } else {
            cout << 0 << endl;
            continue;
        }
        auto hwb = lower_bound(v.begin(), v.end(), hl);
        if (hwb != v.end()) {
            if (*hwb > hl) hwb--;
            // cout << hwb - v.begin() << endl;
        } else {
            cout << n - (lwb - v.begin()) << endl;
            continue;
        }
        cout << hwb - lwb + 1 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while (t--) {
        cout << "Case " << Case++ << ":" << endl;
        solve();
    }
    return 0;
}