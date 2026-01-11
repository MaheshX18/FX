#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string word = "";

    for (int i = 0; i < s.length(); ) {

        if (i + 2 < s.length() &&
            s[i] == 'W' &&
            s[i + 1] == 'U' &&
            s[i + 2] == 'B') {

            if (!word.empty()) {
                cout << word << " ";
                word.clear();
            }
            i += 3;  
        } 
        else {
            word += s[i];
            i++;
        }
    }

    
    if (!word.empty()) {
        cout << word;
    }

    return 0;
}
