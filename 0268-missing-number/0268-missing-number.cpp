class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num=0;
        
        for(int i =0; i<=n; i++)
        {
            int count =0;
           for(int j=0; j<n; j++)
           {
                if(i!=nums[j])
                {
                    count++;
                }
           }
           if(count == n)
           {
                num = i;
           }
        }
        return num;
    }
};