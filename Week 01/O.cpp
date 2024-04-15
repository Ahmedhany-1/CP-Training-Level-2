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
    string s; cin >> s;
    map<char,int>mp;
    mp[s[0]]++;
    for (int i = 1; i < s.size(); ++i){
        if(s[i] != s[i - 1] && mp[s[i]])
        {
            cout << "NO\n";
            return;
        }
        mp[s[i]]++;
    }
    cout <<"YES\n";
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