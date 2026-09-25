class Solution {
public:
    int maxVowels(string s, int k) {
        
        int low = 0;
        int high = k-1;
        int vowelsCount = 0;

        for(int i = 0; i < k; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowelsCount++;
            }
        }

        low++;
        high++;

        int maxVowelsCount = vowelsCount;
        while(high < s.size())
        {
            if(s[low-1] == 'a' || s[low-1] == 'e' || s[low-1] == 'i' || s[low-1] == 'o' || s[low-1] == 'u')
            {
                vowelsCount--;
            }
            if(s[high] == 'a' || s[high] == 'e' || s[high] == 'i' || s[high] == 'o' || s[high] == 'u')
            {
                vowelsCount++;
            }
            high++;
            low++;

            maxVowelsCount = max(maxVowelsCount, vowelsCount);
        }

        return maxVowelsCount;

    }
};
