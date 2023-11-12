#include <iostream>
using namespace std;

int calc_sum_digits(int n){
    int sum_digt = 0;
    while(n>0){
        sum_digt += n % 10;
        n /= 10;
    }
    return sum_digt;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for(int i=0; i<=N; ++i){
        int dummy = calc_sum_digits(i);
        if (dummy>=A && dummy <=B){sum += i;}
    }
    cout << sum << endl;
    return 0;
}