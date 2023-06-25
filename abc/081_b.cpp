#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;
  
  vector<int> v(N);
  for(int i=0; i<N; i++){
  		cin >> v.at(i);
  }
  
  int count = 0;
  bool f = true;
  
  while(f == true){
    for(int i=0; i<N; i++){
    	if(v.at(i)%2 != 0){
			f = false;
          	break;
        }
    	else{v.at(i) /= 2;}
    }
    if(f == true) count++;
  }
  cout << count << endl;
  return 0;
}
