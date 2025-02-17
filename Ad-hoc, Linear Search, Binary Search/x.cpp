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
    int n;
    cin >> n;
    multiset<int> ms;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        v[i] = z;
        ms.insert(z);
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    int i = 0, j = n / 2;
    while (i < n / 2 && j < n && i < j) {
        if (v[i] * 2 <= v[j] && i < j) {
            cnt++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    cout << n - cnt << endl;
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