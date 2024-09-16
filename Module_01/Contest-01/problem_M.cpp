#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    int x, y;
    cin >> n >> m;
    cin >> x >> y;
    int sotre_1 = n * x;
    int sotre_2 = m * y;
    cout << sotre_1 + sotre_2 << '\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}

