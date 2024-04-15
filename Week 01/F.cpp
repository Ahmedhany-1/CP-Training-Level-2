#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Help() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}


void solve() {
    int n,k; cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; ++i) {
        v[i] += v[i - 1];
    }
    double mx = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + k - 1; j <= n; ++j) {
            mx = max(mx , (1.0 * v[j] - v[i - 1]) / (j - i + 1));
        }
    }
    cout << fixed << setprecision(15) << mx;

}

int main() {
    Help();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}