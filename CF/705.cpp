#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >>n;
    
    string str1 = "I hate it ";
    string str2 = "I hate that ";
    string str3 = "I love it ";
    string result = "";
    int i = 1;
    
    while(i <= n) {
        if(i == n) {
            if(i % 2 == 1) {
                result += str1;
            } else {
                result += str3;
            }
        } else {
            if(i % 2 == 1) {
                result += str2;
            } else {
                result += "I love that ";
            }
        }
        i++;
    }

    cout << result << endl;
    return 0;
}