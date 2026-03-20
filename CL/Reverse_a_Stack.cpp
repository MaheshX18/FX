class Solution {
    void insertAtBottom(stack<int> &s,int ele) {
        
        //base case
        if(s.empty()) {
            s.push(ele);
            return ;
        }
        
        int num = s.top();
        s.pop();
        
        //recursize call
        insertAtBottom(s,ele);
        
        s.push(num);
    
    }
  public:
    void reverseStack(stack<int> &st) {
        // code here
        
        // base case
        if(st.empty()) {
            return ;
        }
        
        int num = st.top();
        st.pop();
        
        //recursive call
        
        reverseStack(st);
        
        insertAtBottom(st, num);
        
    }
};