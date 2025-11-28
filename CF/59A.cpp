#include <bits/stdc++.h>
using namespace std;

void toUppercase(string &s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i]-'a'+'A';
        }
    }
}

void toLowercase(string &s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i]-'A'+'a';
        }
    }
}

int main() {
    string s;
    cin >> s;

    int upper = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        }
    }

    int lower = s.length() - upper;
    if(upper > lower){
        toUppercase(s);
    } else {
        toLowercase(s);
    }
    cout << s << endl;

    return 0;
}
