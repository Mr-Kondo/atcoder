#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    vector<string> v_str;
    string str;
    cin >> n;

    for(int i=0; i<n;++i){
        cin >> str;
        v_str.push_back(str);
    }
    
    for (int i=0; i<n; ++i){
        cout << v_str.at(n-1-i) << endl;
    }

    return 0;
}