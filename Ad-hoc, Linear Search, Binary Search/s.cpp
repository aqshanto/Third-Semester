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
    int y, p;
    while (cin >> y >> p) {
        vector<int> pop(p), pre(p + 1, 0);
        for (int i = 0; i < p; i++) cin >> pop[i];
        sort(pop.begin(), pop.end());
        if (y >= p) {
            cout << p << " " << pop[0] << " " << pop[p - 1] << endl;
        } else {
            int st = 0, ed = 0, mx = INT_MIN;
            for (int i = 0; i < p; i++) {
                auto it = lower_bound(pop.begin(), pop.end(), pop[i] + y);
                if (it != pop.end()) {
                    if (*it > pop[i] + y - 1) {
                        --it;
                    }
                    if (mx < (it - pop.begin() - i) + 1) {
                        mx = (it - pop.begin() - i) + 1;
                        st = pop[i];
                        ed = *it;
                    }
                }
            }
            cout << mx << " " << st << " " << ed << endl;
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