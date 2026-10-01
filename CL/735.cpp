class Solution {  
public:  
    vector<int> asteroidCollision(vector<int>& asteroids) {  
        vector<int> res;  
        stack<int> st;  
  
        int n = asteroids.size();  
  
        for(auto it : asteroids)  
        {  
            if(st.empty())  
            {  
                st.push(it);  
                continue;  
            }  

            bool destroyed = false;
  
            if(st.top() > 0 && it < 0)  
            {  
                while(!st.empty() && st.top() > 0 && it < 0)  
                {  
                    if(abs(st.top()) < abs(it))  
                    {  
                        st.pop();  
                    }  
                    else if(abs(st.top()) == abs(it)) 
                    { 
                        st.pop(); 
                        destroyed = true;
                        break; 
                    } 
                    else  
                    {  
                        destroyed = true;
                        break; 
                    }  
                }  

                if(!destroyed)
                    st.push(it);
            }  
            else  
            {  
                st.push(it);  
            }  
        }  
  
        while(!st.empty())  
        {  
            res.push_back(st.top());  
            st.pop();  
        }  
  
        reverse(res.begin(), res.end());  
  
        return res;  
    }  
};