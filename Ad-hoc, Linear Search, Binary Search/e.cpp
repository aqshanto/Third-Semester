#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, c = 1;
    cin >> t;
    while (t--) {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        if (abs(x - y) % d == 0) {
            cout << abs(x - y) / d << endl;
        } else if ((y - 1) % d != 0 && (n - y) % d != 0) {
            cout << -1 << endl;
        } else {
            int st = INT_MAX, ed = INT_MAX;
            if ((y - 1) % d == 0) {
                st = (x - 1) / d;
                if ((x - 1) % d != 0) st++;
                st += (y - 1) / d;
            }
            if ((n - y) % d == 0) {
                ed = (n - x) / d;
                if ((n - x) % d != 0) ed++;
                ed += (n - y) / d;
            }
            cout << min(ed, st) << endl;
        }
    }
}