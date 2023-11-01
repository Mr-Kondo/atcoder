#include <iostream>
using namespace std;
int main() {
    string r, g, b,ss;
    cin >> r >> g >> b;
    ss = r+g+b;
    int num = atoi(ss.c_str());
    if((num)%4 == 0){
        cout << "YES";
    }else{
        cout << "NO" << endl;
    }
    return 0;
}