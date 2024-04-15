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
    ll n, k, q, l, r;
    cin >> n >> k >> q;
    int sz = 200000 + 2;
    vector<ll> v(sz) , ans(sz);
    while (n--) {
        cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }
    for (int i = 1; i <= sz; ++i) {
        v[i] += v[i - 1];
        ans[i] += (v[i] >= k);
    }

    for (int i = 1; i <= sz; ++i) {
        ans[i] += ans[i - 1];
    }
    while(q--)
    {
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] << '\n';
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