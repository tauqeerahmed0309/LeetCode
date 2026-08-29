class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (auto interval : intervals) {

            int start = interval[0];
            int end = interval[1];

            if (ans.empty() || start > ans.back()[1]) {
                ans.push_back({start, end});
            }
            else {
                ans.back()[1] = max(ans.back()[1], end);
            }
        }

        return ans;
    }
};