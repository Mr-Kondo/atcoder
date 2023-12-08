#include<iostream>
using namespace std;

int count_even(int N){
    int ANS = 0;
    while(N%2 == 0){
        ++ANS;
        N /= 2;
    }
    return ANS;
}

int main(){
    int N = 0, CNT = -1, ANS = 0, temp = 0;
    cin >> N;
    for(int i=1; i <= N; i++){
        temp = count_even(i);
        if(temp > CNT){
            CNT = temp;
            ANS = i;}
    }
    cout << ANS << endl;
    return 0;
}