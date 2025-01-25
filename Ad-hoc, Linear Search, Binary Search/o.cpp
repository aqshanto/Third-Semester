#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//
bool islucky(int n) {
    while (n != 0) {
        if ((n % 10) == 4 || (n % 10) == 7) {
        } else {
            return false;
        }
        n /= 10;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    bool f = false;
    for (int i = 1; i <= n; i++) {
        if (islucky(i)) {
            if (n % i == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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