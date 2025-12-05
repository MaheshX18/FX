#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i < arr.size(); i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end(),greater<int>());

    int totalSum =0;
    for(int i=0;i<arr.size();i++){
        totalSum += arr[i];
    }

    int sum1 =0;
    int count =0;
    for(int i=0;i<arr.size();i++){
        sum1 += arr[i];
        count++;
        if(sum1 > totalSum - sum1){
            cout<<count;
            return 0 ;
       
    }
}
    return 0;
}
