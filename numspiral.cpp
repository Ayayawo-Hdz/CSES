#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve(ull& y, ull& x) {
    ull num = 0;
    if (y < x) {if (x % 2 == 0 ? num = (x * x) - (x * 2 - 2) + (y - 1) : num = (x * x) - (y - 1));} else 
    if (y > x) {if (y % 2 == 0 ? num = (y * y) - (x - 1) : num = (y - 1) * (y - 1) + x);} else
    if (y == x) {num = (y * y) - (x - 1);}
    cout << num << "\n";
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ull y, x;
        cin >> y >> x;
        solve(y, x);
    }

    return 0;
}
