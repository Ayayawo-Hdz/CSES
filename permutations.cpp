#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(ll& n) {
    ll og = n;
    vector<ll> nums;
    if (n == 2 || n == 3) {cout << "NO SOLUTION"; return;}
    if (n == 4) {cout << "2 4 1 3"; return;}
    while (n > 0) {nums.push_back(n); n -= 2;}
    n = og; n--;
    while (n > 0) {nums.push_back(n); n -= 2;}
    for (auto& x : nums) {cout << x << " ";}
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    solve(n);

    return 0;
}
