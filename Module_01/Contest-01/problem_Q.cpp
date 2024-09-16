#include <bits/stdc++.h>
using namespace std;
void solve() {
    int A;
    cin >> A;
    int cnt = 1;
    int n = 3;
    while(n--) {
        cnt *= A;
    }
    cout << cnt << '\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}