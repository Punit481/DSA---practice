class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        
        int start = arr[0];
        int profit = 0;

        for(int i = 1; i<n; i++)
        {
            if(arr[i]>start)
            {
                profit = max(profit, (arr[i]-start));
            }

            start = min(start, arr[i]);
        }
        return profit;
    }
};