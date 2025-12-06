#include <bits/stdc++.h>
using namespace std;

int main(){

   string arr1;
   string arr2;
    cin>>arr1;
    cin>>arr2;

     for(int i =0;i<arr1.size() || i<arr2.size();i++){
         if(arr1[i] !=arr2[i]){
             cout<<"1";
         }
         else{
             cout<<"0";
         }
     }
    return 0;
}