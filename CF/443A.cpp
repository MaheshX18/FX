// A. Anton and Letters


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin,s);
 
    s = s.substr(1,s.size() - 2);
 
    set<char> letters;
    
    if (!s.empty()) {
        for (int i = 0;i < s.size();i += 3) {
            letters.insert(s[i]);
        }
    }
 
    cout<<letters.size()<< "\n";
 
    return 0;
}
