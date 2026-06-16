class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {


        if(intervals.empty())
        {
            return {newInterval};
        }
        vector<vector<int>> restore;
        int i = 0;
        bool insert = false;
        vector<vector<int>> res;
        while(i < intervals.size())
        {   
            
            if(intervals[i][0] < newInterval[0] || insert == true)
            {
                restore.push_back({intervals[i][0],intervals[i][1]});
            }else{
                restore.push_back({newInterval[0], newInterval[1]});
                restore.push_back({intervals[i][0],intervals[i][1]});
                insert = true;
            }

            i++;
        }
        if(!insert)
        {
            restore.push_back(newInterval);
        }


        int start1 = restore[0][0];
        int end1 = restore[0][1];

        for (int i = 1; i < restore.size(); i++)
        {
            int start2 = restore[i][0];
            int end2 = restore[i][1];

            if(end1 >= start2)
            {
                start1 = start1;
                end1 = max(end1, end2);

                continue;
            }

            res.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1, end1});

        return res;
    }
};