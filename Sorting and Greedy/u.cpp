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
    string s1, s2;
    cin >> s1 >> s2;
    vector<char> v(s1.size());
    v[s1.size() - 1] = s1[s1.size() - 1];
    for (int i = s1.size() - 2; i >= 0; i--) {
        v[i] = min(v[i + 1], s1[i]);
    }
    bool f = false;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != v[i]) {
            for (int j = s1.size() - 1; j >= 0; --j) {
                if (v[i] == s1[j]) {
                    swap(s1[i], s1[j]);
                    f = true;
                    break;
                }
            }
        }
        if (f) break;
    }
    if (s1 < s2)
        cout << s1 << endl;
    else
        cout << "---" << endl;
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