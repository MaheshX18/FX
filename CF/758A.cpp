#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> input(n);

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    int max = input[0];
    for(int i = 1; i < n; i++){
        if(max < input[i]){
            max = input[i];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (max-input[i]);
    }

    cout << ans;
    return 0;
}