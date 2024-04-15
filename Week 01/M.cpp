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
    int n,p; cin >> n >> p;
    vector<int> v(p + 2);
    while(n--)
    {
        int xi , ri ;cin >> xi >> ri;
        v[max(0, xi - ri)]++;
        v[min(p + 1, xi + ri + 1)]--;
    }
    for (int i = 1; i <= p; ++i) {
        v[i] += v[i - 1];
    }
    int cnt = 0 , ans = 0;
    for(int i = 0; i <= p; i++){
        if(v[i] != 1) cnt++;
        else ans = max(ans, cnt), cnt = 0;
    }
    ans = max(ans, cnt);
    cout << ans;
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