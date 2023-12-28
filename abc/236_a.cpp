#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    char dummy_char;
    int a, b;

    cin >> str;
    cin >> a >> b;
    a = a - 1;
    b = b - 1;
    

    dummy_char = str.at(a);
    str.at(a) = str.at(b);
    str.at(b) = dummy_char;

    cout << str << endl;

    return 0;
}