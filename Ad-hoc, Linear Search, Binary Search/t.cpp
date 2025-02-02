#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//
#define eps 1e-8
void solve() {
    double p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u) {
        double lo = 0.0, hi = 1.0, mid, ans = 0;
        // for (double i = 0.0; i <= 1.0; i += 0.0001) {
        //     double mid = i;
        //     cout << (p * (exp(-mid))) + (q * (sin(mid))) + (r * (cos(mid))) + (s * (tan(mid))) + (t * mid * mid) + u << endl;
        // }
        int cnt = 100;
        bool f = false;
        while (cnt--) {
            mid = (lo + hi) / 2;
            double equans = ((p * (exp(-mid))) + (q * (sin(mid))) + (r * (cos(mid))) + (s * (tan(mid))) + (t * mid * mid) + u);
            if (equans >= -0.00000000000009 && equans <= 0.00000000001) {
                cout << fixed << setprecision(4) << mid << endl;
                f = true;
                break;
            } else if (equans < 0) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        if (!f) cout << "No solution" << endl;
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