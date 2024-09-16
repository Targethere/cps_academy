#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; 
    cin >> s;

    int num1 = stoi(string(1, s[0]) + string(1, s[1]) + string(1, s[2]));
    int num2 = stoi(string(1, s[1]) + string(1, s[2]) + string(1, s[0]));
    int num3 = stoi(string(1, s[2]) + string(1, s[0]) + string(1, s[1]));


    int sum = num1 + num2 + num3;

    
    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}
