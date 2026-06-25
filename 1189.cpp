class Solution 
{
public:
    int maxNumberOfBalloons(string text) 
    {
        unordered_map<char,int> have;

        for (int i = 0; i < text.size(); i++)
        {
            have[text[i]]++;
        }

        if (have['b'] < 1 || have['a'] < 1 || have['l'] < 2 || have['o'] < 2 || have['n'] < 1)
        {
            return 0;
        }

        int mini = INT_MAX;

        mini = min(mini, have['b']);
        mini = min(mini, have['a']);
        mini = min(mini, have['l'] / 2);
        mini = min(mini, have['o'] / 2);
        mini = min(mini, have['n']);


        return mini;
    }
};
