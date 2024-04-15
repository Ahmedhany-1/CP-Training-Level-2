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
    int n,q; cin >> n >> q;
    vector<ll>v(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    sort(v.rbegin() ,v.rend() - 1);
    for (int i = 1; i <= n; ++i)
        v[i] += v[i - 1];

    while(q--)
    {
            int y , x; cin >> y >> x;
        cout << (v[y] - v[y - x]) << '\n';
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