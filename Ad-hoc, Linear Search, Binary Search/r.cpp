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
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int money;
        cin >> money;
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        int a, b, dif = INT_MAX;
        while (i < n && j >= 0 && i < j) {
            if (i < j && v[i] + v[j] == money) {
                if ((v[j] - v[i]) < dif) {
                    a = v[i];
                    b = v[j];
                    dif = v[j] - v[i];
                }
                i++;
            } else if (i < j && v[i] + v[j] < money) {
                i++;
            } else if (i < j && v[i] + v[j] > money) {
                j--;
            }
        }
        cout << "Peter should buy books whose prices are " << a << " and " << b << "." << endl
             << endl;
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