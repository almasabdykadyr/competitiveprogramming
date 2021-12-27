#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<utility>
using namespace std;
void solve(string s){
  if(s.size()%2!=0){
    cout << "NO\n";
  } else {
    bool ch = true;
    for(int i=0; i<s.size()/2; i++){
      if(s[i] != s[i + (s.size()/2)]){
        ch = false;
        break;
      }
    }
    if(ch){
      cout << "YES\n";
    } else 
      cout << "NO\n";
  }
}

int main(){ 
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
    string s; 
    cin >> s;
    solve(s);
  }
}
