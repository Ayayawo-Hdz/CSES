#include <bits/stdc++.h>
#define ull unsigned long long int
 
using namespace std;
 
bool solve() {
    ull a, b;
    cin >> a >> b;
    return (2 * min(a, b) >= max(a, b)) && ((a + b) % 3 == 0);
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ull t;
    cin >> t;
    while(t--) {
        bool res = solve();
        if (res ? cout << "YES\n" : cout << "NO\n");
    }
 
    return 0;
}
