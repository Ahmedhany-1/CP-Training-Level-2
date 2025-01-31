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
    bool flag = false;
    vector<int> v(n + 1) , ans(n + 1 );
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if(v[i] > n)
            flag = true;
    }
    if(flag) return void (cout << "NO\n");
    for (int i = 0; i < n; ++i) {
        ans[v[i]]--;
        ans[0]++;
    }
    for (int i = 1; i < n; ++i) {
        ans[i] += ans[i - 1];
    }

    v[n] = ans[n];
    cout << (ans == v ? "YES\n" : "NO\n");
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