class Solution {
public:
int ncr(int n,int j)
{
    long long res=1;
    for(int i=0;i<j;i++)
    {
     res*=(n-i);
     res/=(i+1);

    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
      
        for(int i=0;i<numRows;i++)
        {  
            vector<int>row;
            for(int j=0;j<=i;j++)
            {
                row.push_back(ncr(i,j));
                
            }
            result.push_back(row);
        }
        return result;
    }
};