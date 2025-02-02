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
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    vector<int> pos;
    pos.push_back(1);
    int csum = v[0], a = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] * 2 <= a) {
            csum += v[i];
            pos.push_back(i + 1);
        }
    }
    if ((sum / 2) + 1 <= csum) {
        cout << pos.size() << endl;
        for (int i = 0; i < pos.size(); i++) cout << pos[i] << " ";
        cout << endl;
    } else {
        cout << 0 << endl;
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