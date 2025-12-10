class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int product =INT_MIN;
        for(int i =0; i<n; i++)
        {
            int temp =1;
            for(int j=i; j<n; j++)
            {
                temp = temp * nums[j];
                if(temp>product)
                {
                    product = temp;
                }
            }
        }
        return product;
    }
};