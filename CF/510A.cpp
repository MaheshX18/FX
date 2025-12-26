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
                    colNumber++;
                }
                cout<<endl;
                rowNumber++;
                colNumber = 1;
            }else{
                for(int j = 1; j <= m; j++){
                    if(colNumber == m && traverse == false){
                        cout<<"#";
                        
                       
                    }else if(colNumber == 1 && traverse == true){
                        cout<<"#";
                        
                    }else{
                        cout<<".";
                        
                    }
                    colNumber++;
                    
                }cout<<endl;
                rowNumber++;
                // traverse = !traverse;
                // above commented code can written as below ,,, concept of toggling
                if(traverse == false){
                    traverse = true;
                }else{
                    traverse = false;
                }
                colNumber = 1;
            }
        }
}

