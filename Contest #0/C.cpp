//You're braver than you believe, and stronger than you seem, and smarter than you think...!
#include<bits/stdc++.h>

using namespace std;
#define IOS() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define ll long long
#define sz(a) ((int)(a).size())
#define take(x) for (auto &it : x) cin >> it;
#define print(x) for (auto &it : (x)) cout << it << " ";
#define vi(n) vector<int>v(n)
typedef vector<int> vi;
typedef vector<ll> vl;
#define el "\n"

void Help() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void solve() {
    int n; cin >> n;
    cout <<((n % 2 == 0) ? "Mahmoud\n" : "Ehab\n");
}

int main() {
    Help();
    int t = 1;
//  cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}