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
    int n, num; cin >> n;
    int arr[100005]{};
    for (int i = 0; i < n; ++i) {
        cin >> num;
        arr[num]++;
    }
    for (int i = 0; i < 100005; ++i) {
        if(arr[i] > 1)
            return void (cout << "ne krasivo\n");
    }
    cout << "prekrasnyy\n";
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