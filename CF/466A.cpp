// 466A-Cheap Travel
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    
    int cost1 = n*a;
    int cost2 = (n/m)*b + (n%m)*a;
    if(n%m != 0){
        cost2 = min(cost2, ((n/m)+1)*b);
    }


    
    cout<<min(cost1,cost2)<<endl;

    return 0;



}