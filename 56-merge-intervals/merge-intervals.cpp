class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int >> ans;
        int startTime = intervals[0][0];
        int endTime = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > endTime){
                ans.push_back({startTime, endTime});
                startTime = intervals[i][0];
                endTime = intervals[i][1];

            }
            else{
                endTime = max(endTime, intervals[i][1]);
            }
        }
        ans.push_back({startTime, endTime});
        return ans;
    }
};