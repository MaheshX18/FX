#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string ternary;
  cin>>ternary;
  for(int i = 0; i < ternary.size(); i++)
  {
    if(ternary[i] == '.'){
      cout<<0;
    }else if(ternary[i] == '-' && ternary[i+1] == '-')
    {
      cout<<2;
      i++;
    }else if(ternary[i] == '-' && ternary[i+1] == '.'){
      cout<<1;
      i++;
    }
  }

  return 0;
}
