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
    string str;
    cin >> str;
    vector<int> v;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '+')
            v.push_back(str[i] - '0');
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) {
            cout << v[i];
        } else {
            cout << v[i] << "+";
        }
    }
    cout << endl;
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