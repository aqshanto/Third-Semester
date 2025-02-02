#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define inputarr(v, n) \
    for (int i = 0; i < n; i++) cin >> v[i];

#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//

void solve() {
    int n, d, r;
    while (cin >> n >> d >> r) {
        if (n == 0 && d == 0 && r == 0) break;
        vector<int> mor(n), eve(n);
        inputarr(mor, n);
        inputarr(eve, n);
        sort(mor.begin(), mor.end());
        sort(eve.rbegin(), eve.rend());
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if ((mor[i] + eve[i]) > d) {
                sum += (((mor[i] + eve[i]) - d) * r);
            }
        }
        cout << sum << endl;
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