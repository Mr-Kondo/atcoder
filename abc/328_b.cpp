#include <iostream>
using namespace std;
int main() {
    int N, D;
    int cnt = 0;
    cin >> N;
    for(int i=1; i<N+1; i++){
        cin >> D;
        if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==9 || i==11 || i==22 || i==33 || i==44 || i==55 || i==66 || i==77 ||i==88 || i==99){
            if(D>=i){cnt++;}
            if(D>=i*11){cnt++;}
            if( i==11 || i==22 || i==33 || i==44 || i==55 || i==66 || i==77 ||i==88 || i==99){
                if(D>=int(i/10)){cnt++;}
            }
        }
    }
    cout << cnt << endl;
    return 0;
}