class Solution {
public:
    int totalFruit(vector<int>& fruit) {
        int low = 0;
        int high = 0;
        int res = 0;
        unordered_map<int,int> freq;
        int n = fruit.size();

        for(high = 0; high < n; high++) {

            freq[fruit[high]]++;
            while(freq.size() > 2) {
                freq[fruit[low]]--;
                if(freq[fruit[low]] == 0) {
                    freq.erase(fruit[low]);
                }
                low++;
            }
            if(freq.size() <= 2){
                res = max(res,high-low+1);
            }
        }
        return res;
    }
};