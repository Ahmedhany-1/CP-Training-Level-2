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


void solve() {
    int n,q;
    cin >> n >> q;
    vl v(n) , ans(q) , can(n) ;
    ll k = -1;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        can[i] = max(v[i] , k);
        k = can[i];
    }
    for (int i = 1; i < n; ++i) {
        v[i] += v[i - 1];
    }
    for (auto &it: ans) {
        cin >> it;
    }
    for (int i = 0; i < q; ++i) {
        int l = 0 , r = n - 1 , c = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (can[mid] <= ans[i]) {
                l = mid + 1;
                c = mid;
            } else
                r = mid - 1;
        }
        cout << (c  != -1 ? v[c] : 0 ) << ' ';
    }
    cout << el;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}