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
    vector<int> c_pos[128];
    // cout << str.size() << endl;
    for (int i = 0; i < str.size(); i++) {
        // cout << (int)str[i] << endl;
        c_pos[(int)str[i]].push_back(i);
    }
    // for (int i = 0; i < 128; i++) {
    //     if (c_pos[i].size() > 0) {
    //         cout << (char)i << endl
    //              << "\t";
    //         for (int j = 0; j < c_pos[i].size(); j++) {
    //             cout << c_pos[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        int lastpos = -1, st = -1, ed = 0;
        bool f = true;
        for (int i = 0; i < s.size(); i++) {
            auto &pos_array = c_pos[s[i]];
            auto it = lower_bound(pos_array.begin(), pos_array.end(), lastpos + 1);
            if (it == pos_array.end()) {
                cout << "Not matched" << endl;
                f = false;
                break;
            }
            if (st == -1) st = *it;
            lastpos = *it;
            ed = *it;
        }
        if (f) {
            cout << "Matched" << " " << st << " " << ed << endl;
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