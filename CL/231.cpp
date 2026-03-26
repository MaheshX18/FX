class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long product = 1;

        while(product < n){
            product *= 2;
        }

        if(product == n){
            return true;
        }else{
            return false;
        }



        // if(n <= 0){
        //         return false;
        // }
        // if(n == 1){
        //         return true;
        // }
        // return (n%2==0) && isPowerOfTwo(n/2);
        
    }
};