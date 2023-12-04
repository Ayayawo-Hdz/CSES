#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

void solve(ull& n) {
    ull m = 1000000007, i = 1;
    for (ull j = 1; j <= n; j++) {i *= 2; i %= m;}
    cout << i;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    cin >> n;
    solve(n);

    return 0;
}
