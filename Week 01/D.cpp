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
    string s1 , s2 , s3;
    int A[26]{} , B[26]{};
    cin >> s1 >> s2 >> s3;
    for (char i : s1) {
        A[i - 'A']++;
    }
    for (char i : s2) {
        A[i - 'A']++;
    }
    for (char i : s3) {
        B[i - 'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        if(A[i] != B[i]) {
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";

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