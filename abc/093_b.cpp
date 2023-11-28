#include <iostream>
using namespace std;
int main(){
    int A, B ,K;
    cin >> A >> B >> K;

    int range = B-A+1;
    int range_ceil;
    if (range-K < 0){range_ceil = 0;}
    else {range_ceil = range-K;}
    
    for(int i=0;i<range;++i){
            if(i<K || i>=range_ceil){
                cout << A+i << endl;
            }
    }

    return 0;
}