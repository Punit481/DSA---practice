class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();

        vector<int> res;
        unordered_set<int> check;
        for(int i=0; i<n; i++)
        {
            if(check.count(arr[i])) continue;
            check.insert(arr[i]);
            int count = 0;
            for(int j=0; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            
            if(count>n/3)
            {
             res.push_back(arr[i]);
            }
        }
        return res;
    }
};