#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  int res = 0;
  
  for(int i=0; i<=N; i++){
    string str = to_string(i);
    int temp = 0;
    //cout << "str= " << str << endl;
    for(int j=0; j<(int)str.size();j++){
    	temp += (int)(str[j]-'0');
    }
    if( temp >= A  && temp <= B) /*cout<<temp<<endl;*/res += i;
  }

  cout << res << endl;
  return 0;
}
