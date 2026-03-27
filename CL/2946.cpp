#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    // Step 1: Sort the prices
    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    while(q--){
        int m;
        cin >> m;

        // Step 2: Binary search
        auto it = upper_bound(prices.begin(), prices.end(), m);

        // Step 3: Count shops
        int count = it - prices.begin();

        cout << count << "\n";
    }

    return 0;
}