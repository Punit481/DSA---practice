class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int t) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        for(int i =0; i<n;  i++)
        {
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j =i+1; j<n-2; j++)
            {
                if(j>i+1 && arr[j]==arr[j-1]) continue;
                int k = j+1;
            int m = n-1;
            while(k<m)
            {
                long long sum = (long long)arr[i]+ arr[j]+arr[k]+arr[m];
                if(sum<t)
                {
                    k++;
                }
                else if(sum>t)
                {
                    m--;
                }
                else
                {
                    vector<int> temp = {arr[i], arr[j],arr[k],arr[m]};
                    ans.push_back(temp);
                    k++;
                    m--;
                    while(k<m && arr[k]==arr[k-1]) k++;
                    while(k<m && arr[m]==arr[m+1]) m--;
                }
            }
            }
        }
        return ans;

    }
};