#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    map<string, int> nameCount;
    string name;
    
    for(int i = 0; i < n; i++) {
        cin >> name;
        
        if(nameCount[name] == 0) {
            cout << "OK\n";
        } else {
            cout << name << nameCount[name] << "\n";
        }
        
        nameCount[name]++;
    }
    
    return 0;
}