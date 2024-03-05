#include <iostream>
#include<math.h>
using namespace std;
int main() {
    double H, W;
    cin >> H >> W;
    if(H == 1){
        cout << W << endl;
    }else if(W == 1){
        cout << H << endl;
    }else{
        cout << ceil(H/2)*ceil(W/2) << endl;
    }
    return 0;
}