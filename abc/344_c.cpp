#include <bits/stdc++.h>
using namespace std;

int main() {
 vector <unsigned int> vec_A, vec_B, vec_C, vec_X;
 int N, M, L, Q;
 
 unsigned int tmp = 0;
 
 cin >> N;
 for(int i=0; i<N; ++i){
   cin >> tmp;
   vec_A.push_back(tmp);
 }
 tmp = 0;
 
 cin >> M;
 for(int i=0; i<M; ++i){
   cin >> tmp;
   vec_B.push_back(tmp);
 }
 tmp = 0;
 
 cin >> L;
 for(int i=0; i<L; ++i){
   cin >> tmp;
   vec_C.push_back(tmp);
 }
 tmp = 0;
 
 cin >> Q;
 for(int i=0; i<Q; ++i){
   cin >> tmp;
   vec_X.push_back(tmp);
 }
 
 vector<unsigned int> vec_D;
 
 for(int i=0; i<N; ++i){
   for(int j=0; j<M; ++j){
     for(int k=0; k<L; ++k){
       vec_D.push_back(vec_A[i]+vec_B[j]+vec_C[k]);
     }
   }
 }
 
 unordered_set<unsigned int> set_D(vec_D.begin(), vec_D.end());
 
 for(int i=0; i<Q; ++i){
   if(set_D.find(vec_X[i]) != set_D.end()) cout << "Yes\n";
   else cout << "No\n";
 }
   
 return 0;
}
