#include<iostream>
#include<string>
using namespace std;
int main(){
  int N = 0;
  cin >> N;
  for(int i=0; i<=N; i++){
    for(int j=0; j<=N-i; j++){
      for(int k = 0; k <= N-j-i; k++){
        cout << i << ' ' << j << ' ' << k << endl;
      }
    }
  }
  return 0;
}
