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
    int arr[1005]{};
    int n, num; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        arr[num]++;
    }
    int cnt = 0, mx;
    for (int i = 0; i < 1005; ++i) {
        if(arr[i])
            cnt++;
    }
    mx = *max_element(arr, arr + 1005);
    cout << mx << ' ' << cnt;
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