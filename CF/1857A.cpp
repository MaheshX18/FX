#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int sum =0;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        int sum2 = 0;
        bool verify = false;

        for(int i = 0; i < n;i++){
            sum2 += arr[i];
            sum -= arr[i];

            if(sum2 %2 == 0 && sum%2==0){
                cout <<"YES\n";
                verify = true;
                break;
            }
        }

        if(verify == false){
            cout <<"NO\n";
        }
        
    }
    return 0;
}