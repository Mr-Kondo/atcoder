#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
  	string Ans_S;
  
  	cin >> S;
    if( S == "" ) return 0;
    if((int)S.size() > 100) return 0;
  	for(int i=0; i<(int)S.size(); i++){
        char ch = S[i];
    	if(ch != 'a' && ch != 'i' && ch != 'u' && ch != 'e' && ch != 'o'){
          //cout << S[i] << endl;
          Ans_S.push_back(S[i]);
        }
    }
  
  	cout << Ans_S << endl;
  
    return 0;
}