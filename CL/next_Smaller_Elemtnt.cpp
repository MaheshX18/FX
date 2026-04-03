#include<stack>


class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        stack<int> st;
        st.push(-1);
        
        int n = arr.size();
        vector<int> ans(n);
        
        for(int i = n-1; i >= 0 ; i--){
            
            int curr = arr[i];
            while(st.top() >= curr){
                st.pop();
            }
            //ans is stack ka top
            ans[i] = st.top();
            st.push(curr);
        }
        return ans;
    }
};