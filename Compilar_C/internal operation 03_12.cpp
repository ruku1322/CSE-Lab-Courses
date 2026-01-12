#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter one line code: " << endl;
    string str, id1, id2, id3;
    getline(cin, str);

    int A = -1, B = -1, C = -1;


    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '=') {
            A = i - 1;  // `=` separates id1 and id2
        }
        else if (str[i] == '+') {
            B = i - 1;  // `+` or `-` separates id2 and id3
             cout << "MOVF id3,R2" << endl;
             cout << "MULF 50.0,R2" << endl;
             cout << "MOVF id2,R1" << endl;
             cout << "ADDF R2,R1" << endl;
             cout << "MOVF R1,id1" << endl;
        }
          else if ( str[i] == '-') {
            B = i - 1;  // `+` or `-` separates id2 and id3
             cout << "MOVF id3,R2" << endl;
             cout << "MULF 50.0,R2" << endl;
             cout << "MOVF id2,R1" << endl;
             cout << "SUBF R2,R1" << endl;
             cout << "MOVF R1,id1" << endl;
        }
        else if (str[i] == '*') {
            C = i - 1;  // `*` separates id3 and any remaining part
        }
    }

    id1 = str.substr(0, A + 1);  // Extract part before '='
    id2 = str.substr(A + 2, B - (A + 1));  // Extract part after '=' and before '+'/'-'
    id3 = str.substr(B + 2, C - (B + 1));  // Extract part after '+'/'-' and before '*'

    // Output the results

    cout << "You entered id1: " << id1 << endl;
    cout << "You entered id2: " << id2 << endl;
    cout << "You entered id3: " << id3 << endl;

    return 0;
}
//Sum=OldSum+rate*50


