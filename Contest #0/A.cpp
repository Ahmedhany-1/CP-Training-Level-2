//You're better than you believe, and stronger than you seem, and smarter than you think...!
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(a) ((int)(a).size())
#define take(x) for (auto &it : x) cin >> it;
#define print(x) for (auto &it : (x)) cout << it << " ";
typedef vector<int> vi;
typedef vector<ll> vl;
#define LOG2(x) __lg(x)
#define SET_BIT_COUNT(x)  __builtin_popcountll(x)
#define el "\n"

void Help() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}


void solve() {
    string s; cin >> s;
    int k; cin >> k;
    vl v(26);
    ll mx = 0 , ans = 0;
    for (int i = 0; i < 26; ++i) {
        cin >> v[i];
        mx = max(v[i] , mx);
    }
    for (int i = 0; i < sz(s); ++i) {
        ans += v[s[i] - 'a'] * (i + 1);
    }
    int idx = sz(s) + 1;
    while(k--)
    {
        ans += mx * idx++;
    }
    cout << ans ;
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