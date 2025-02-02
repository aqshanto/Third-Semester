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
//     multiset<int> ms;
//     for (int i = 0; i < n; i++) {
//         int z;
//         cin >> z;
//         ms.insert(z);
//     }
//     int cnt = 0;
//     // auto last = ms.end();
//     // last--;
//     // for (auto x = last; x != ms.begin(); x--) {
//     //     auto it = *x;
//     //     auto pos = ms.lower_bound(it / 2);
//     //     if (x != ms.end()) {
//     //         cnt++;
//     //         ms.erase(x);
//     //         if (*pos * 2 > it) {
//     //             pos--;
//     //         }
//     //         if (pos != ms.end()) {
//     //             ms.erase(pos);
//     //         }
//     //     }
//     int oi = 0;
//     for (auto e : ms) {
//         cout << e << " ";
//         oi++;
//         if (oi % 10 == 0) {
//             cout << endl;
//         }
//     }
//     cout << endl;
//     //     cout << "cnt " << cnt << endl;
//     // }
//     while (!ms.empty()) {
//         auto x = prev(ms.end());
//         auto it = *x;
//         ms.erase(x);
//         cnt++;
//         cout << it << " ";
//         auto pos = ms.upper_bound(it / 2);
//         if (pos != ms.begin()) {
//             pos--;
//             ms.erase(pos);
//             cout << *pos;
//         } else {
//             auto b = ms.lower_bound(it / 2);
//             if (*b * 2 == it) {
//                 ms.erase(*b);
//                 cout << *b;
//             }
//         }
//         cout << endl;
//         oi = 0;
//         for (auto e : ms) {
//             cout << e << " ";
//             oi++;
//             if (oi % 10 == 0) {
//                 cout << endl;
//             }
//         }
//         cout << endl;
//         cout << "cnt " << cnt << endl;
//     }
//     cout << cnt << endl;
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

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// #define printarr(v)                    \
//     for (int i = 0; i < v.size(); i++) \
//         cout << v[i] << " ";           \
//     cout << endl;

// //---------------------------------------//
// #define eps 1e-8
// void solve() {
//     double p, q, r, s, t, u;
//     while (cin >> p >> q >> r >> s >> t >> u) {
//         double lo = 0.0, hi = 1.0, mid, ans = 0;
//         // for (double i = 0.0; i <= 1.0; i += 0.0001) {
//         //     double mid = i;
//         //     cout << (p * (exp(-mid))) + (q * (sin(mid))) + (r * (cos(mid))) + (s * (tan(mid))) + (t * mid * mid) + u << endl;
//         // }
//         while (lo <= hi) {
//             mid = (lo + hi) / 2;
//             double equans = ((p * (exp(-mid))) + (q * (sin(mid))) + (r * (cos(mid))) + (s * (tan(mid))) + (t * mid * mid) + u);
//             // cout << lo << ' ' << mid << ' ' << hi << " " << equans << endl;
//             if (equans >= 0.00001 && equans <= 0.0009) {
//                 cout << fixed << setprecision(4) << mid << endl;
//                 // cout<<" " << equans << endl;
//                 break;
//             } else if (equans < 0) {
//                 hi = mid - 0.0001;
//             } else {
//                 lo = mid + 0.0001;
//             }
//         }
//         if (lo > hi) cout << "No solution" << endl;
//     }
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