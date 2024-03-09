#include <bits/stdc++.h>
using namespace std;

int main() {
 vector <unsigned int> vec;
 unsigned int tmp = 0;
 
 while(cin >> tmp){
  vec.push_back(tmp);
 }
 
 for(int i=0; i<vec.size(); ++i){
   cout << vec[vec.size()-1 - i] << endl;
 }
 
 return 0;
}