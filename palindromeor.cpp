#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve(map<char, int>& mp) {
    int cvnt = 0, rep = 0;
    string mid = "";
    for (auto it = mp.begin(); it != mp.end();) {
        if (it->second % 2 != 0) {
            cvnt++; auto y = it->first; auto x = it->second; mid = y; rep = x; it = mp.erase(it);
            if (cvnt > 1) {cout << "NO SOLUTION"; return;}
        } else {it++;}
    }
    string s = "";
    for (auto it = mp.begin(); it != mp.end(); it++) {for (int i = 0; i < it->second / 2; i++) s += it->first;}
    string end = string(s.rbegin(), s.rend());
    for (int i = 0; i < rep; i++) s += mid;
    cout << s + end << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string e; cin >> e;
    map<char, int> mp;
    for (char c : e) mp[c]++;
    solve(mp);

    return 0;
}
