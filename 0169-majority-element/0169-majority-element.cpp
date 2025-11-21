class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int count =0;
        int el = 0;

        for(int i=0; i<arr.size(); i++)
        {
            if(count == 0)
        {
            count = 1;
            el = arr[i];
        }
        else if(arr[i]==el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
        return el;
    }

};