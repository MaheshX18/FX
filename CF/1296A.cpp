#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    

    while(n--){
        int a;
        cin >> a;
        vector<int> arr(a);
        // int sum = 0;
        int odd = 0;
        int even = 0;

        for(int i = 0; i < a; i++){
            cin >> arr[i];
           
            if(arr[i] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }


        if(odd == 0){
            cout<<"NO"<<endl;
        }else if(even == 0 && a % 2 == 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}