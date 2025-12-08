class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int curStart = arr[0][0];
        int curEnd = arr[0][1];
        for (int i=1; i<n; i++)
        {
            int nextStart = arr[i][0];
            int nextEnd = arr[i][1];

            if(nextStart <= curEnd)
            {
                curEnd= max(curEnd,nextEnd);
            }
            else
            {
                ans.push_back({curStart, curEnd});
                curStart = nextStart;
                curEnd = nextEnd;
            }
        }
        ans.push_back({curStart, curEnd});
        return ans;
    }
};