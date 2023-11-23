#include <iostream>
using namespace std;

int factrial(int n){
    if(n == 0){
        return 1;
    }
    int i = factrial(n-1);
    return n * i;  
}

int main(){
    int P;
    cin >> P;
    int  arr[10];
    
    for(int i=0; i<10; ++i){
        arr[i] = factrial(i+1);
    }
    
    int sum = 0;
    for(int i=0; i<10; ++i){
        sum += P/arr[9-i];
        P = P%arr[9-i];
    }
    
    cout << sum << endl;
    
    return 0;
}