#include<iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    bool flag = false;
    
    for(int i=0; i<16; ++i){
        if((i+1)%2==0){
            if(str[i] != '0') flag = true;
        }
    }

    if(flag == true) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}