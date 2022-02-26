#include<bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;
    string s;
    cin >> s;
    int a = 0, d = 0;

    for (auto c: s) {
        (c == 'A') ? a++ : d++;
    }

    if (a > d) {
        cout << "Anton";
    } else if (d > a) cout << "Danik";
    else cout << "Friendship";
}