class Solution
{
    public:
        vector<vector < int>> merge(vector<vector < int>> &intervals)
        {
            if (intervals.size() <= 1)
               	//If intervals is empty or contain a single interval
                return intervals;
            sort(intervals.begin(), intervals.end());
           	//Sorting the all the intervals according to all interval first element
            vector<vector < int>> result;
            result.push_back(intervals[0]);
           	//Pushing the first interval in the result in the starting
            for (int i = 1; i < intervals.size(); i++)
            {
                if (result.back()[1] >= intervals[i][0])
               	//Comparing the second element of result's last interval with the
               	//i'th interval's first element
                {
                    result.back()[1] = max(result.back()[1], intervals[i][1]);
                   	//If the condition satisfies then we only have to find the
                   	//second element of result's last interval as the first 
                   	//element will always be result.back()[0]
                }
                else
                    result.push_back(intervals[i]);
               	//Pushing the interval if condition not satisfies
            }
            return result;
        }
};