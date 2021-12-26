#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int l[n];
  for(int i=0; i<n; i++){
    cin >> l[i];
  }
  int e=0,o=0;
  for(int i=0; i<n; i++){
    if(l[i] % 2 == 0){
      e++;
    } else o++;
  }
  if(e > o){
    for(int i=0; i<n; i++){
      if(l[i] % 2 != 0){
        cout << i+1;
      }
    }
  } else {
    for(int i=0; i<n; i++){
      if(l[i] % 2 == 0){
        cout << i+1;
      }
    }
  }
}
