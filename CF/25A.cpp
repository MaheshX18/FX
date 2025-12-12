#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }

    if(evenCount<oddCount){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1<< " ";
                break;
            }    
        }   
    } else{
        for(int i =0;i<n;i++){
            if(arr[i]%2 != 0){
                cout<<i+1<<" ";
                break;
            }
        }
    }
    return 0;
}