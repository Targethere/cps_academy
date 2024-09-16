#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; 
    cin >> n >> m;
    int area = n * m;
    int peri = 2 * (n + m);
    cout  << area << " " << peri << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}
