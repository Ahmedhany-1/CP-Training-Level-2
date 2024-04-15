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
    string s; cin >> s;
    int sz = s.size();
    vector<int> prefix(sz + 1);
    for (int i = 1; i < sz; i++) {
        prefix[i + 1] = prefix[i] + (s[i] == s[i - 1]);
    }
    int n; cin >> n;
    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l] << '\n';
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