#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, r = "hello";
    cin >> s;
    int rs = 4;
    for (int i = s.size() - 1; i > -1; i--) {
        if (s[i] == r[rs]) {
            r.pop_back();
            rs--;
            if (rs == -1) break;
        }
    }

    if(r.size() > 0) cout << "NO";
    else cout << "YES";
}