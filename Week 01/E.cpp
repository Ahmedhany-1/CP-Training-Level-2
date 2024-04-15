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
    ll n, sum = 0; cin >> n;
    string s; cin >> s;
    vector<ll> change(s.size());
    for (int i = 0; i < s.size(); ++i) {
        sum += (s[i] == 'L' ? i : n - i - 1);
    }
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'L')
            change[i] = ((n - i - 1) - i);
        else
            change[i] = (i - (n - i - 1));
    }

    sort(change.rbegin(), change.rend());
    for (auto &it: change) {
        cout << it <<' ';
    }
    for (int i = 0; i < s.size(); ++i) {
        if (change[i] > 0) sum += change[i];
        cout << sum << " ";
    }
    cout << endl << endl;
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