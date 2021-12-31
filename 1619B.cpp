#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  unsigned long long l[n];
  for(int i=0; i<n; i++){
     cin >> l[i];
  }
  for(unsigned long long i=0; i<n;i++){
     set<unsigned long long>sl;
     unsigned long long tmp = 1;
     while(tmp * tmp <= l[i]){
        sl.insert(tmp * tmp); 
        tmp++;
     }
     tmp = 1;
     while(tmp * tmp * tmp <= l[i]){
        sl.insert(tmp * tmp * tmp);
        tmp++;
     }
     cout << sl.size() << endl;
  }
   
   return 0;
}