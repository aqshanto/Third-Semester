// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// #define printarr(v)                    \
//     for (int i = 0; i < v.size(); i++) \
//         cout << v[i] << " ";           \
//     cout << endl;

// //---------------------------------------//

// void solve() {
//     int n;
//     cin >> n;
//     multimap<int, int> mp;
//     vector<int> ar(n);
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         ar[i] = x;
//         mp[x] = 0;
//     }
//     sort(ar.begin(), ar.end());
//     int cnt = 0;
//     for (auto it : mp) {
//         auto y = lower_bound(mp.begin(), mp.end(), it.first * 2);
//         if (y != mp.end()) {
//             auto val = *y;
//             if (val.second != 1) {
//                 cnt++;
//                 mp.erase(y);
//                 mp.erase(it.first);
//             }
//         }
//     }
//     cout << n - cnt << endl;
//     // printarr(ar);

//     // int x = 0, y = 0;
//     // for (int i = 0; i < n; i++) {
//     //     cout << v[i].first << " " << v[i].second << endl;
//     //     if (v[i].second == 1) {
//     //         x++;
//     //     } else {
//     //         y++;
//     //     }
//     // }
//     // cout << (x / 2) + y << endl;
// }

// signed main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1, Case = 1;
//     // cin>>t;
//     while (t--) {
//         // cout << "Case " << Case++ << ": ";
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

//---------------------------------------//

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ar[i] = x;
        v.push_back(x);
    }

    sort(ar.begin(), ar.end());
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        auto it = lower_bound(v.begin(), v.end(), )
    }
    // for (auto it : ms) {
    //     cout << it << " ";
    // }
    // cout << endl;
    // for (int x : ms) {
    //     auto it = ms.find(x);
    //     if (it != ms.end()) {
    //         cout << *it << " ";
    //         ms.erase(it);
    //         cnt++;                           // Remove the current element
    //         auto y = ms.lower_bound(x * 2);  // Find the smallest element >= 2*x
    //         if (y != ms.end()) {
    //             cout << *y << endl;
    //             ms.erase(y);  // Remove the paired element
    //             // cnt++;
    //         }
    //         for (auto it : ms) {
    //             cout << it << " ";
    //         }
    //         cout << endl;
    //         cout << "cnt " << cnt << endl;
    //     }
    // }

    // cout << n - cnt << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    // cin >> t;
    while (t--) {
        // cout << "Case " << Case++ << ": ";
        solve();
    }
    return 0;
}