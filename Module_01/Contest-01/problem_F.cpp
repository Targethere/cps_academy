#include <bits/stdc++.h>
using namespace std;

void solve() {
    double r; 
    cin >> r;

    const double pi = 3.14159265358979323846;
    cout << fixed << setprecision(6) << pi * r * r << " ";
    cout << fixed << setprecision(6) << 2 * pi * r << '\n'; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}
