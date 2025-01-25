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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto lower = lower_bound(v.begin(), v.end(), x);
        lower--;
        if (lower != v.end() && lower - v.begin() >= 0) {
            cout << *lower << " ";
        } else
            cout << "X ";
        auto up = upper_bound(v.begin(), v.end(), x);
        if (up != v.end() && up - v.begin() >= 0)
            cout << *up << endl;
        else
            cout << "X" << endl;
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