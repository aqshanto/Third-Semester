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

void merge(vector<int>& v, int low, int mid, int high) {
    vector<int> temp;
    //[low... mid]
    //[mid+1...high]
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(v[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
    }
}

void ms(vector<int>& v, int low, int high) {
    if (low == high) return;
    int mid = (low + high) / 2;
    ms(v, low, mid);
    ms(v, mid + 1, high);
    merge(v, low, mid, high);
}

void solve() {
    int n;
    vector<int> v(n);
    inputarr(v, n);
    ms(v, 0, n - 1);
    printarr(v);
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