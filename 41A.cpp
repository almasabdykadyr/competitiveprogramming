#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    bool ch = true;
    for(int i=0; i<s1.size(); i++){
        if(s1[i] != s2[s2.size() - 1 - i])ch = false;
    }

    ch ? cout << "YES" : cout << "NO";
}