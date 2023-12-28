#include <iostream>
using namespace std;
int main(){
    int a, b, Sunuke_point;
    Sunuke_point = 0;
    bool Takahashi_1 = false, Takahashi_2 = false, Takahashi_4 = false, Aoki_1 = false, Aoki_2 = false, Aoki_4 = false;
    cin >> a >> b;
    if(a == 1){
        Takahashi_1 = true;
    }
    if(a == 2){
        Takahashi_2 = true;
    }
    if(a == 4){
        Takahashi_4 = true;
    }
    if(a == 3){
        Takahashi_1 = true;
        Takahashi_2 = true;
    }
    if(a == 5){
        Takahashi_1 = true;
        Takahashi_4 = true;
    }
    if(a == 6){
        Takahashi_2 = true;
        Takahashi_4 = true;
    }
    if(a == 7){
        Takahashi_1 = true;
        Takahashi_2 = true;
        Takahashi_4 = true;
    }
    if(b == 1){
        Aoki_1 = true;
    }
    if(b == 2){
        Aoki_2 = true;
    }
    if(b == 4){
        Aoki_4 = true;
    }
    if(b == 3){
        Aoki_1 = true;
        Aoki_2 = true;
    }
    if(b == 5){
        Aoki_1 = true;
        Aoki_4 = true;
    }
    if(b == 6){
        Aoki_2 = true;
        Aoki_4 = true;
    }
    if(b == 7){
        Aoki_1 = true;
        Aoki_2 = true;
        Aoki_4 = true;
    }
    if(Takahashi_1 == true || Aoki_1 == true){Sunuke_point += 1;}
    if(Takahashi_2 == true || Aoki_2 == true){Sunuke_point += 2;}
    if(Takahashi_4 == true || Aoki_4 == true){Sunuke_point += 4;}

    cout << Sunuke_point << endl;
}