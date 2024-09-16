#include <bits/stdc++.h>
using namespace std;
void solve() {
    int A, B;
    cin >> A >> B;

    vector<long long> dp(B + 1, 0);
    dp[0] = 1; 

    for (int i = 1; i <= B; ++i) {
        dp[i] = dp[i - 1] * A;
    }

    cout << dp[B] << '\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}

