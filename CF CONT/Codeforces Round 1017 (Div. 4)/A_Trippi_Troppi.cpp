#include <bits/stc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> ans;

    while(n--){
        vector<string> s;
        cin>>s;

        for(int i=0;i<s.size()-1;i++){
            if(i == 0){
                ans.push_back(s[i]);
            }

            if(s[i] == " "){
                ans.push_back(s[i+1]);
        }
    }
}
return ans;
}