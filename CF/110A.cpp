#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int luckyCount = 0;
    long long temp = n;
    while(temp > 0){
        int rem = temp % 10;
        temp /= 10;

        if(rem == 4 || rem == 7){
            luckyCount++;
        }
    }

    if(luckyCount == 0){
        cout << "NO";
        return 0;
    }

    int x = luckyCount;
    while(x > 0){
        int d = x % 10;
        x /= 10;

        if(d != 4 && d != 7){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
