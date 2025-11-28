#include <iostream>
using namespace std;

int main(){

    cout<<"Hello MR.MVP"<<endl;

    int n;
    cout<<"Enter the value of size of an array -->> ";
    cin>>n;
    cout<<endl;
    int arr[n];
    
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}