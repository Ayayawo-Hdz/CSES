#include <bits/stdc++.h>
#define ull unsigned long long int
 
using namespace std;
 
void solve(ull n) {
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {n /= 2;} else {n *= 3; n++;}
        cout << n << " ";
    }  
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
