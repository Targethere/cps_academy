#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a, b;
    cin >> a >> b;
    int cnt1 = pow(a, b);
    int cnt2 = pow(b, a);
    cout << cnt1 + cnt2 << '\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}