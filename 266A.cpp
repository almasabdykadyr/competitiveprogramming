#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int a,n = 0;
  cin >> a >> s;

  for(int i=0; i<a; i++){
    if(s[i] == s[i+1])n++;
  }

  cout << n;
}
