#include<bits/stdc++.h>

using namespace std;

int r = 0;

void solve(string s) {
    int n = s.size();
    string s1, s2, s3;
    if (n >= 1) s1 = s.substr(0, 1);
    if (n >= 2) s2 = s.substr(0, 2);
    if (n >= 3) s3 = s.substr(0, 3);
    if (s1 == "1" && n >= 1) {
        if (n == 1) {
            r = 1;
            return;
        } else solve(s.substr(1));
    }
    if (s2 == "14" && n >= 2) {
        if (n == 2) {
            r = 1;
            return;
        } else solve(s.substr(2));
    }
    if (s3 == "144" && n >= 3) {
        if (n == 3) {
            r = 1;
            return;
        } else solve(s.substr(3));
    }
}

int main() {
    string s;
    cin >> s;
    solve(s);
    if (r == 1) {
        cout << "YES";
    } else cout << "NO";
    return 0;
}
