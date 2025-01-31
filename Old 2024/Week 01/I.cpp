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
   vector<pair<ll,ll>>v(n+  1);
   vector<ll>ans;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin() , v.end());
    for (int i = 1; i <= n; ++i)
        v[i].first += v[i - 1].first;

    ans.push_back(v[n].second);
    for (int i = n - 1; i >= 0 ; --i) {
        if(v[i].first >= (v[i + 1].first - v[i].first))
            ans.push_back(v[i].second);
        else
            break;
    }
    sort(ans.begin() , ans.end());
    cout << ans.size() << '\n';
    for (auto &it: ans) {
       cout << it << ' ';
    }
    cout << '\n';
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