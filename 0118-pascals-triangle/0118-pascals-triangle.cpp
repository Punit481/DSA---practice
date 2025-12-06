class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector< vector<int> > arr(n);
        for(int i =0; i<n; i++)
        {
            arr[i]= vector<int> (i+1,0);

            arr[i][0]=1;
            if(i>0)
            {
                arr[i][i]=1;
            }
        }

        for(int i=0; i<n; i++)
        {
            int m = arr[i].size();
            for(int j =0; j<m; j++)
            {
                if(i>1 && j>0 && j<m-1)
                {
                    arr[i][j]=arr[i-1][j-1] + arr[i-1][j];
                }
            }
        }
        return arr;
    }
};