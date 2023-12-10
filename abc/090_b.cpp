#include <iostream>
#include <cmath>
using namespace std;

int* split_digit_number(int Num, int* Array, int size){
    for(int i=0; i<size; i++){
        int digit = pow((double)10, (double)size-1-i);
        Array[i] = Num / digit;
        Num -= digit*Array[i];
    }
    return Array;
}

int main(){
    int A, B;
    cin >> A >> B;
    int cnt = 0;
    int size = log10((double)A)+1;
    int* Array = new int[size];

    for(int i=A; i<=B; i++){
        split_digit_number(i, Array, size);
        if(Array[1] == Array[3] && Array[0] == Array[4]){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}