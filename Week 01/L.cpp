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
    ll n; cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    int q,l,r;
    cin >> q;
    while(q--)
    {
        cin >> l >> r ;
        cout << v[++r] - v[++l - 1] << '\n';
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