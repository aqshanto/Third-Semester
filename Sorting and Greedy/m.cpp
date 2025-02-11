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
    int cnt = 0, sccrw = 0;
    ;
    string str;
    cin >> str;
    int st = 0;
    bool f = false;
    for (int i = 0; i < n; i++) {
        if (str[i] == '.') {
            cnt++;
            f = true;
        } else if (str[i] == '#') {
            if (f) cnt++;
        }
        if (cnt == 3) {
            sccrw++;
            f = false;
            cnt = 0;
        }
    }
    if (cnt != 0) sccrw++;
    cout << sccrw << endl;
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