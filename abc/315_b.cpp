#include <bits/stdc++.h>
using namespace std;

int main() {
   	int M;
  	int a, b;
  	vector<int> D;
  	int SUM = 0;
  
 	cin >> M;
  
  	for(int i=0; i<M; i++){
    	int dummy;
      	cin >> dummy;
        D.push_back(dummy);
      	SUM += D[i];
    }
  	
  	int MID = (SUM+1)/2;
  	//cout << "MID = " << MID << endl; 

  	SUM = 0;
  	
  	for(int i=0; i<M; i++){
      	SUM += D[i];
      	if(SUM >= MID){
          a = i+1;
          SUM -= D[i];
          break;
        }
    }
  	//cout << "SUM = " << SUM << endl;
  	//cout << "a = " << a << endl; 
  	
  	b = MID - SUM;
  	//cout << "b = " << b << endl; 
  	
  	cout << a << " " << b << endl;
  	
    return 0;
}