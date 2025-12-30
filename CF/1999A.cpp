#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i =0 ;i<n;i++)cin>>arr[i];

    int rem=0;
    int divide =0;

    for(int i=0;i<n;i++){
        rem = arr[i]%10;
        divide = arr[i]/10;
        cout<<rem+divide<<endl;
    }
    return 0;
}