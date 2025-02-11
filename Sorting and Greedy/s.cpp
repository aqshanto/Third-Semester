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
    int mn = INT_MAX, pos = -1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (mn > v[i]) {
            mn = min(mn, v[i]);
            pos = i;
        }
    }
    vector<bool> ch(n, false);
    for (int i = n - 1; i >= 1; i--) {
        if (v[i] < v[i - 1]) {
            swap(v[i], v[i - 1]);
            ch[i - 1] = true;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        if (v[i] < v[i - 1] && ch[i - 1] == false) {
            swap(v[i], v[i - 1]);
            ch[i - 1] = true;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        if (v[i] < v[i - 1] && ch[i - 1] == false) {
            swap(v[i], v[i - 1]);
            ch[i - 1] = true;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        if (v[i] < v[i - 1] && ch[i - 1] == false) {
            swap(v[i], v[i - 1]);
            ch[i - 1] = true;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        if (v[i] < v[i - 1] && ch[i - 1] == false) {
            swap(v[i], v[i - 1]);
            ch[i - 1] = true;
        }
    }
    printarr(v);
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
