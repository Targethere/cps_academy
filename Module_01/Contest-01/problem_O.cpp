#include <bits/stdc++.h>
using namespace std;
void solve() {
    int number;
    cin >> number;
    bitset<64> binary(number);
    string d = binary.to_string();
    int cnt = 0;
    for(int i = d.size() - 1; i > 0; i--) {
        if(d[i] != '1') 
            cnt++;
        else break;
    } 
    cout << cnt << '\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}

