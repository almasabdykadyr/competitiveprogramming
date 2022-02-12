#include<bits/stdc++.h>

using namespace std;

int main(){
		string s;
		cin >> s;
		int x = 0,o = 0;
		for(auto c: s){
				if(c == '1'){
						x++;
						o = 0;
				}
				if(c == '0'){
						o++;
						x = 0;
				}

				if(x == 7 || o == 7){
						cout << "YES";
						return 0;
				}
		}

		cout << "NO";
		return 0;
}
