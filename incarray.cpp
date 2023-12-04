#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

void solve(vector<ull>& arr) {
    ull x = 0;
    for (ull i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {x += arr[i] - arr[i + 1]; arr[i + 1] = arr[i];}
    }
    cout << x;
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull n, e;
    cin >> n;
    vector<ull> arr;
    while (n--) {cin >> e; arr.push_back(e);}
    solve(arr);

    return 0;
}
