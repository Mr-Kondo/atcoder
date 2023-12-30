#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int* split_digit_number(long long Num, int* Array, int size){
    for(int i=0; i<size; i++){
        long long digit = std::pow((double)10, (double)size-1-i);
        Array[i] = Num / digit;
        Num -= digit*Array[i];
    }
    return Array;
}

int convert_base_K_num_to_decimal(long long N, int K){ 
    // This function is to convert N in base-K to dicimal number.
    long long decimal_num = 0;                // A return variable which is decimal(base in 10).

    string str_N = to_string(N);        // A string type variable which used to calculate N's digit by string size.
    int digit_num = str_N.size();       // A integer type variable which is N'digit.
    int* digit_N = new int[digit_num];  // An array of integer type variable, whose each element has digit number of N. 

    split_digit_number(N, digit_N, digit_num);

    for(int i = 0; i < digit_num; i++){
        decimal_num += pow(K,digit_num-1 - i) * digit_N[i];
    } 

    return decimal_num;
}

int main(){
    int K;
    long long A, B;
    long long Ans = 0;
    cin >> K;
    cin >> A >> B;
    A = convert_base_K_num_to_decimal(A, K);
    B = convert_base_K_num_to_decimal(B, K);
    Ans = A * B;
    cout << Ans << endl;
    return 0;
}