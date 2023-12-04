#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

void solve(int& n) {
    for (int i = 1; i <= n; i++) {
        ull num = ((pow(i, 4) - pow(i, 2)) / 2) - (2 * (2 * ((i - 2) * (i - 1))));
        cout << num << "\n";
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    solve(n);

    return 0;
}
