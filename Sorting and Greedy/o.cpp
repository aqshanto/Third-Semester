// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define double long double
// #define endl "\n"
// #define inputarr(v, n) \
//     for (int i = 0; i < n; i++) cin >> v[i];

// #define printarr(v)                    \
//     for (int i = 0; i < v.size(); i++) \
//         cout << v[i] << " ";           \
//     cout << endl;

// //---------------------------------------//

// void solve() {
//     int s, x;
//     cin >> s >> x;
//     int cnt = 0, size = 1;
//     while (x * size <= s) {
//         if (x * size <= s) {
//             cnt++;
//             size *= x;
//         }
//     }
//     cout << cnt + 1 << endl;
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
    int s, x;
    cin >> s >> x;
    int cnt = 0;
    while (s / x != 0) {
        cnt++;
        s /= x;
    }
    cout << cnt + 1 << endl;
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