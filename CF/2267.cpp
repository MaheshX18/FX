#include<bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    
    //start == end
    while(t--) {
        
        int n;cin>>n;char c;cin>>c;string s; cin>>s;
        int start = 0;int end = n-1;
        int cost = 0;
        while(start <= end) 
        {
            if(s[start] == s[end]) {start++;end--;continue;}
            else{if(s[start]==c&& s[end] != c || s[start] != c && s[end]==c){cost++; start++;end--;}
                else if(s[start] != c && s[end] != c){cost+=2;start++,end--;}
                else{start++;end--;}
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}