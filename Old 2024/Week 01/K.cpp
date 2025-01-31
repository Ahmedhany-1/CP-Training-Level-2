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
    ll n , q;
    cin >> n >> q;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    ll sum = v[n];
    int l , r , k;
    while(q--)
    {
        cin >> l >> r >> k;
        ll ans = sum - (v[r] - v[l - 1]) + (r - l + 1) * k;
        cout << (ans % 2 ? "YES\n" : "NO\n");
    }
}

int main() {
    Help();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}