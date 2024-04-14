#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  char ch;
	map<char, int> alpha;
	
	while (scanf("%c", &ch) != EOF) {
		if (isalpha(ch)) {
			++alpha[tolower(ch)];
		}
	}
	
	/*
	for (char ch = 'a'; ch <= 'z'; ++ch) {
		printf("%c : %d\n", ch, alpha[ch]);
	}
	*/
	vector<int> vec(100);
	for (char ch = 'a'; ch <= 'z'; ++ch) {
		rep(i,101){
		  if(alpha[ch] == i){
		    vec[i] += 1;
		  }
		}
	}
	
	bool flag = false;
	rep(i,101){
	  if(i == 0) continue;
	    if(vec[i] != 0 && vec[i] != 2){
	       flag = true;
	       break;
	  }
	} 
	
	if(flag == true) cout << "No\n";
	else cout << "Yes\n";
	
  return 0;
}
