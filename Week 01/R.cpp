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
    vector<ll> pref1(n + 1) ,pref2(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> pref1[i];
    pref2 = pref1;
    sort(pref2.begin() , pref2.end());

    for (int i = 1; i <= n ; ++i)
        pref1[i] += pref1[i - 1];
    for (int i = 1; i <= n ; ++i)
        pref2[i] += pref2[i - 1];

    int q; cin >> q;
    while(q--)
    {
        int t,l,r; cin >> t >> l >> r;
        if(t == 1) cout << pref1[r] - pref1[l - 1];
        else cout << pref2[r] - pref2[l - 1];
        cout << '\n';
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