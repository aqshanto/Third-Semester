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
    string str;
    cin >> str;
    int fpos = -1, cnt = 0, lpos = str.size() - 1;
    for (int i = 0; i < str.size(); i++) {
        if (fpos == -1 && str[i] == '1') fpos = i;
        if (str[i] == '1') {
            cnt++;
        }
    }
    for (int j = str.size() - 1; j >= 0; j--) {
        if (str[j] == '1') {
            lpos = j;
            break;
        }
    }
    if (cnt == (lpos - fpos + 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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