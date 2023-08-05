#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(S.begin(), S.end());
	
    cout << "1:reversed String." << endl;
    cout << S << endl;
  	cout << endl;
    
  	cout << "2:reversed deviding words" << endl;
    for (int i = 0; i < 4; ++i) {
      reverse(divide[i].begin(), divide[i].end());
      cout << divide[i] << endl;
    }
  	cout << endl;

    // 端から切っていく
    bool flag_1 = true;
  	int k = 0;
    for (int i = 0; i < S.size();) {
        bool flag_2 = false; // 4 個の文字列たちどれかで divide できるか
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) { // d で divide できるか
                flag_2 = true;
                // divideできた単語
                reverse(d.begin(), d.end());
              
              	cout << "dividable word No." << k << endl;
                cout << d << endl;
              	k++;
              
                i += d.size(); // divide できたら i を進める
            }
        }
        if (!flag_2) { // divide できなかったら
            flag_1 = false;
            break;
        }
    }

  	cout << endl;
  
    // 回答
  	cout << "Answer" << endl;
    if (flag_1) cout << "YES" << endl;
    else cout << "NO" << endl;
}