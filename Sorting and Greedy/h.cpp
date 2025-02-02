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
    int n;
    cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int es = even.size(), os = odd.size();
    int y = abs(es - os);
    if (es == os || y == 1) {
        cout << 0 << endl;
    } else {
        if (es < os) {
            int sum = 0;
            for (int i = 0; i < os - es - 1; i++) {
                sum += odd[i];
            }
            cout << sum << endl;
        } else if (es > os) {
            int sum = 0;
            for (int i = 0; i < es - os - 1; i++) {
                sum += even[i];
            }
            cout << sum << endl;
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