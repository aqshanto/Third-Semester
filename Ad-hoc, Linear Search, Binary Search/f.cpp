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
    string str, news;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        if (news.empty())
            news.push_back(str[i]);
        else {
            if (str[i] == news.back()) {
                news.pop_back();
                cnt++;
            } else {
                news.push_back(str[i]);
            }
        }
    }
    if (cnt % 2 == 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
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