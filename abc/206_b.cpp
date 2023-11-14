#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int i = 0, sum = 0;
    while(sum < N){
        ++i;
        sum += i;
    }
    cout << i;
    return 0;
}