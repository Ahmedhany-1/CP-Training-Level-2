//You're braver than you believe, and stronger than you seem, and smarter than you think...!
#include<bits/stdc++.h>

using namespace std;
#define IOS() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(a) ((int)(a).size())
#define take(x) for (auto &it : x) cin >> it;
#define lpi(i, s, e) for(int i=s;i<e;i++)
#define updatepref(v, n) for (int i = 1; i <= n ; ++i) v[i] += v[i - 1];
#define print(x) for (auto &it : (x)) cout << it << " ";
typedef vector<int> vi;
typedef vector<ll> vl;
#define el "\n"
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
/*"---------------------------------------------------------------------------"*/

/*"---------------------------------------------------------------------------"*/

void Help() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void solve() {
    int n, ans = 2e9;
    cin >> n;
    vi v(n);
    take(v);
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] > v[i + 1])
            ans = 0;
        else
            ans = min(ans, (v[i + 1] - v[i] ) / 2 + 1);
    }

    cout << ans << el;
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