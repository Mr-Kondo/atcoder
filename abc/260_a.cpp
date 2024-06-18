#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  char ch;
	map<char, int> alpha;
	
	while (scanf("%c", &ch) != EOF) {
		if (isalpha(ch)) {
			++alpha[tolower(ch)]; // lower_alphabet !!
		}
	}
	
	for (char ch = 'a'; ch <= 'z'; ++ch) {
		if(alpha[ch] == 3) {cout << -1; return 0;}
		else if(alpha[ch] == 1) { cout << ch; return 0;}
	}
  
  return 0;
}
