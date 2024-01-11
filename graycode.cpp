#include <bits/stdc++.h>
#define endl '\n'
 
using namespace std;
 
/*-------------------SOLBEGIN-------------------*/
 
void solve() {
    int n; cin >> n;
    for (int i = 0; i < (1 << n); ++i) {
        int x = i ^ (i >> 1);
        bitset<32> b(x);
        string s = b.to_string();
        cout << s.substr(32 - n) << endl;
    }
    return;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
 
    return 0;
}
