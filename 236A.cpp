#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include <utility>
using namespace std;
int main(){ 
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  int c=0;

  for(int i=0; i< s.size(); i++){
    if(s[i] != s[i+1]){
      c++;
    }
  }

  if(c%2==0){
    cout << "CHAT WITH HER!";
  } else cout << "IGNORE HIM!";
}
