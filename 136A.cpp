#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin  >> n;

    int list[n];

    for(int i=0; i<n; i++){
        cin >> list[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=0; j < n; j++){
            if(list[j] == i){
                cout << ++j << ' ';
            }
        }
    }
    
    return 0;
}