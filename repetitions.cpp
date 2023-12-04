#include <bits/stdc++.h>

using namespace std;

void solve(string dna) {
    vector<int> n;
    int x = 0;
    for (int i = 0; i <= dna.size(); i++) {
        if (dna[i] == dna[i + 1]) {x++;} else {n.push_back(x + 1); x = 0;} 
    }
    cout << *max_element(n.begin(), n.end());
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string dna = "";
    string e;
    while (cin >> e) {dna += e;}
    solve(dna);

    return 0;
}
