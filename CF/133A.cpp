#include <bits/stdc++.h>
using namespace std;

int main(){
    char b = '9';

    string input;
    cin >> input;

    int i = 0;
    
    while(i < input.size()){
        if(input[i] == 'H' || input[i] == b || input[i] == 'Q'){
            cout << "YES" << endl;
            return 0;
            
        }     
        i++; 
    }
    cout << "NO" << endl;
    return 0;

}
