#include<iostream>
#include<string>
using namespace std;
int main(){
  string str = "";
  cin >> str;
  if(str.size() >= 5){
    for (int i = str.size()-3; i < str.size(); i++ ){
      if(str.at(i) == '3'){ str.at(i) = '4';}
    }
  }else{
    for (int i = 0; i < str.size(); i++){
     if(str.at(i) == '3'){ str.at(i) = '4';}
    }
  }
  cout << str << endl;
  return 0;
}
