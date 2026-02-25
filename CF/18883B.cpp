#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map<char,int> freq;

        for(char c : s){
            freq[c]++;
        }

        int odd = 0;
        for(auto it : freq){
            if(it.second % 2 != 0)
                odd++;
        }

        if(k >= odd - 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}