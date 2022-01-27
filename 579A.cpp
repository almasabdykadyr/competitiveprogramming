#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s = bitset<32>(n).to_string();
    int r =0;
    for(auto c : s){
        if(c == '1'){
            r++;
        }
    }

    cout << r;
}
