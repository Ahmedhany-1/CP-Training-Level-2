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
    ll n ,q , ans = 0;
    cin >> n >> q;
    vector<ll> v(n) , idx(n);
    for (auto &it: v) {
        cin >> it;
    }
    idx.push_back(0);
    int l , r;
    while(q--)
    {
        cin >> l >> r;
        idx[--l]++;
        idx[r]--;
    }
    for (int i = 1; i < n; ++i) {
        idx[i] += idx[i - 1];
    }
    sort(idx.begin() , idx.end() - 1);
    sort(v.begin() , v.end());
    for (int i = 0; i < n; ++i) {
       ans += v[i] * idx[i];
    }
    cout<< ans;
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