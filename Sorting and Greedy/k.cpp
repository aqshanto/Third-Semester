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
    int t = 1, Case = 1;
    int b, s;
    while (cin >> b >> s) {
        if (b == 0 && s == 0) break;
        cout << "Case " << Case++ << ": ";
        vector<int> beche(b), spinster(s), all;
        map<int, int> mp;
        for (int i = 0; i < b; i++) {
            cin >> beche[i];
            mp[beche[i]] = 0;
            all.push_back(beche[i]);
        }
        for (int i = 0; i < s; i++) {
            cin >> spinster[i];
            mp[spinster[i]] = 1;
            all.push_back(spinster[i]);
        }
        sort(beche.begin(), beche.end());
        sort(spinster.begin(), spinster.end());
        if (b <= s) {
            cout << 0 << endl;
        } else {
            cout << b - s << " " << beche[0] << endl;
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cin>>t;
    solve();
    return 0;
}