#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 1;   
    int maxCount = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i - 1] <= arr[i]) {
            count++;        
        } else {
            count = 1;             
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;
    return 0;
}
