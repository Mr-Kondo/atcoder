#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int64_t sum = 0;
    for (int i = 0; i <= N; ++i){
        if (i%3 != 0 && i%5 != 0){ sum += i; }
    }

    cout << sum << endl;
    return 0;
}