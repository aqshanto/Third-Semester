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
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        ms.insert(z);
    }
    int cnt = 0;
    // auto last = ms.end();
    // last--;
    // for (auto x = last; x != ms.begin(); x--) {
    //     auto it = *x;
    //     auto pos = ms.lower_bound(it / 2);
    //     if (x != ms.end()) {
    //         cnt++;
    //         ms.erase(x);
    //         if (*pos * 2 > it) {
    //             pos--;
    //         }
    //         if (pos != ms.end()) {
    //             ms.erase(pos);
    //         }
    //     }
    int oi = 0;
    for (auto e : ms) {
        cout << e << " ";
        oi++;
        if (oi % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    //     cout << "cnt " << cnt << endl;
    // }
    while (!ms.empty()) {
        auto x = prev(ms.end());
        auto it = *x;
        ms.erase(x);
        cnt++;
        cout << it << " ";
        auto pos = ms.upper_bound(it / 2);
        if (pos != ms.begin()) {
            pos--;
            ms.erase(pos);
            cout << *pos;
        } else {
            auto b = ms.lower_bound(it / 2);
            if (*b * 2 == it) {
                ms.erase(*b);
                cout << *b;
            }
        }
        cout << endl;
        oi = 0;
        for (auto e : ms) {
            cout << e << " ";
            oi++;
            if (oi % 10 == 0) {
                cout << endl;
            }
        }
        cout << endl;
        cout << "cnt " << cnt << endl;
    }
    cout << cnt << endl;
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