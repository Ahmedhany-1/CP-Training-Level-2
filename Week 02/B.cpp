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
    vector<vector<int>> idx(26);
    for (int i = 0; i < sz(s); ++i) {
        idx[s[i] - 'a'].push_back(i);
    }
    for (int i = 0; i < 26; ++i) {
        sort(all(idx[i]));
    }

    vector<int> last;
    vector<bool> p;
    int q; cin >> q;
    while (q--) {
        string commend;
        cin >> commend;
        bool ok = true;
        if (commend == "push") {
            char c; cin >> c;
            int lasElement = -1;
            if (!last.empty()) lasElement = last.back();
            auto it = upper_bound(idx[c - 'a'].begin() , idx[c - 'a'].end() , lasElement);
            if(it == idx[c - 'a'].end()) {
                ok = false;
                last.push_back(1e9);
            }
            else
                last.push_back(*it);
            p.push_back(ok);

        } else {
            if(!last.empty()) last.pop_back();
            if(!p.empty()) p.pop_back();
            if(!p.empty()) ok = p.back();
        }
        cout << (ok ? "YES\n" : "NO\n");
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