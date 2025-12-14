#include <bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin >> input;

    vector<string> ans;
    for(int i = 0; i < input.size(); i++){
        char c = input[i];
        if(c == 'A' || c == 'a' || c== 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'y' || c == 'Y'){
            continue;
        }else if(isupper(c)){
            string temp = ".";
            temp += tolower(c);
            ans.push_back(temp);
        }else{
            string temp = ".";
            temp += c;
            ans.push_back(temp);
        }
    }
    for(auto &x: ans){
        cout << x;
    }
    return 0;
   
}