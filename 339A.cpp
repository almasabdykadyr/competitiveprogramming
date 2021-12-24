#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    string s;
    cin >> s;
    vector<int>list;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            list.push_back(s[i] - '0');
        }
    }

    sort(list.begin(), list.end());

    for(int i=0; i<list.size(); i++){
        if(i +  1 == list.size()){
            cout << list[i];
            return 0;
        }
        cout << list[i] << '+';
    }
}
