#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

void solve(ull& n) {
    ull j = 0, res = 0;
    for (ull i = 1; i <= log(n) / log(5); i++) {
        j = pow(5, i);
        if ((n / j) >= 1) {res += n / j;}
    }
    cout << res;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull n, res = 0;
    cin >> n;
    solve(n);

    return 0;
}
