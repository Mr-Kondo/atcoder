#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;
  
  int a, b, c;
  bool flag = false;
  if(10*Y < N){
    cout << -1 <<" " << -1 << " " << -1 << endl;
    return 0;
  }
  for(int i=0; i<=N; i++){
  	for(int j=0; j<=N-i; j++){
    	for(int k=0; k<=N-i-j; k++){
        	if((10*i+5*j+k == Y/1000)&&(i+j+k == N)){
            	cout << i << " " << j << " " << k << endl;
              	flag = true;
              	return 0;
            }
        }
    }
  }
  if (flag == false) cout << -1 <<" " << -1 << " " << -1 << endl;
  return 0;
}
