#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> worms(n);
    for(int i = 0; i < n; i++){
        cin >> worms[i];
    }

    int q;
    cin >> q;

    vector<int> queries(q);
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += worms[i];
        worms[i] = sum;
    }

    for(int i = 0; i < q; i++){
        int query = queries[i];
        int index = lower_bound(worms.begin(), worms.end(), query) - worms.begin();
        cout << index + 1 << endl;
    }

    cout << flush;

    

























    // vector<int> prefixSums(n);
    // prefixSums[0] = worms[0];
    // for(int i = 1; i < n; i++){
    //     prefixSums[i] = prefixSums[i - 1] + worms[i];
    // }
    // for(int i = 0; i < q; i++){
    //     int query = queries[i];
    //     int index = lower_bound(prefixSums.begin(), prefixSums.end(), query) - prefixSums.begin();
    //     cout << index + 1 << endl;
    // }

    // cout << flush;





    return 0;
}