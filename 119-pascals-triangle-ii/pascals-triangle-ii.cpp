class Solution {
public:
    int ncr(int row,int col)
    {
        long long res=1;
        for(int i=0;i<col;i++)
        {
            res*=(row-i);
            res/=(i+1);
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int>result;
        for(int i=0;i<rowIndex+1;i++)
        {
         result.push_back(ncr(rowIndex,i));
        }
        return result;
    }
};