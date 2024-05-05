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
    ll n; cin >> n;
    vl v(n) , ans1 , ans2;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        if(v[i] < i + 1) {
            ans1.push_back(i + 1);
            ans2.push_back(v[i]);
        }
    }
  //  reverse(all(ans2));
   /* for (auto &it: ans1) {
        cout << it << ' ';
    }
    cout << el;
    for (auto &it: ans2) {
        cout << it << ' ';
    }*/
   ll sz = sz(ans2) , cnt = 0;
    for (int i = 0; i < sz ; ++i)
    {
        ll k = ans2[i];
        int l = 0 , r = sz(ans1) - 1 , mid , last = -1;
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(ans1[mid] < k) {
                last = max(last , mid + 1);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if(last != -1)
            cnt += last;
    }
    cout << cnt << el;
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