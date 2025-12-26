#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int rowNumber = 1;
    int colNumber = 1;

    bool traverse = false;

   
        for(int i = 1; i <= n; i++){
            if(rowNumber % 2 != 0){
                for(int j = 1; j <= m; j++){
                    cout<<"#";
                    rowNumber++;
                }
            }else{
                for(int j = 1; j <= m; j++){
                    if(colNumber == m && traverse == false){
                        cout<<"#";
                        traverse = true;
                        colNumber++;
                    }else if(colNumber == 1 && traverse == true){
                        cout<<"#";
                        colNumber++;
                    }else{
                        cout<<".";
                    }
                    
                }
            }
        }
}





















    // for(int i = 1; i <= n; i++){
    //     for(int j = m; j > 0; j--){

    //         if(n % 2 != 0){
    //             cout<<"#";
    //         }else if(n % 2 ==0; && j != m){
    //             cout<<".";
    //         }else if(n % 2 ==0; && j != m){
    //             cout<<"#"
    //         }
    //     }
    // }
}