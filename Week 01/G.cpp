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
    int n; cin >> n;
    vector<double> x(n) , y(n ) , pref(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> y[i];
        pref[i + 1] = (x[i] - y[i]) * (x[i] - y[i]);
    }

    for (int i = 1; i <= n; ++i) {
        pref[i] += pref[i - 1];
    }

    int q; cin >> q;
    while(q--)
    {
        int i , j; cin >> i >> j;
        double ans = sqrt(pref[j] - pref[i - 1]);
        cout << fixed << setprecision(6) << ans << '\n';
    }
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