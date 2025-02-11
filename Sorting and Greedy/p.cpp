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
    sort(str.rbegin(), str.rend());
    string s = "";
    if (str[0] != str[1]) s.push_back(str[0]);
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1] && str[i] != 'z') {
            char ch = str[i] + 1;
            str[i] = ch;
            str.erase(i - 1, 1);
            i -= 2;
        }
    }
    cout << str << endl;
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