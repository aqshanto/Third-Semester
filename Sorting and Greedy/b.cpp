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
int cnt = 0;
void ms(vector<int>& v, int low, int mid, int high) {
    vector<int> temp;
    int i = low, j = mid + 1;
    while (i <= mid && j <= high) {
        if (v[i] <= v[j]) {
            cnt++;
            temp.push_back(v[i]);
            i++;
        } else {
            temp.push_back(v[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(v[i]);
        i++;
    }
    while (j <= high) {
        temp.push_back(v[j]);
        j++;
    }
    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
    }
}

void merge_sort(vector<int>& v, int low, int high) {
    if (low == high) return;
    int mid = low + (high - low) / 2;
    merge_sort(v, low, mid);
    merge_sort(v, mid + 1, high);
    ms(v, low, mid, high);
}

void solve() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        printarr(v);
        merge_sort(v, 0, n - 1);
        printarr(v);
        cout << cnt << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while (t--) {
        // cout << "Case " << Case++ << ": ";
        solve();
    }
    return 0;
}