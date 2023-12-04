#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(ll& n) {
    vector<ll> set1, set2;
    if ((n * (n + 1) / 2 ) % 2 != 0) {cout << "NO"; return;}
    cout << "YES\n";
    ll x = 0, y = 0;
    for (ll i = n; i >= 1; --i) {
        if (x <= y) {set1.push_back(i); x += i;} else
        {set2.push_back(i); y += i;}
    }
    cout << set2.size() << "\n";;
    for (auto& x : set2) {cout << x << " ";}
    cout << "\n";
    cout << set1.size() << "\n";
    for (auto& x : set1) {cout << x << " ";}
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
