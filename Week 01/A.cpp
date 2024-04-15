#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl

void Help() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}


void solve() {
    ll n , k ; cin >> n >> k;
    vector<ll> v(n);
    for (auto &it: v) {
        cin >> it;
    }
    ll ans = 0 , val;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        if(val == 1) {
            ans += v[i];
            v[i] = 0;
        }
    }
    for (int i = 1; i < n; ++i) v[i] += v[i - 1];

    ll mx = 0;
    for (int i = k - 1; i < n; ++i) {
        if(i == k - 1) mx = max(mx , v[i]);
        mx = max(mx , v[i] - v[i - k]);
    }
    cout << mx + ans << el;
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