#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

int solve(vector<ull>& num, ull& n) {
    sort(num.begin(), num.end());
    for (int i = 1; i < n; i++) {
        if (num[i - 1] != i) return i;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    cin >> n;
    vector<ull> num(n-1);
    for (auto& e : num) {cin >> e;}
    ull miss = solve(num, n);
    cout << miss;

    return 0;
}
