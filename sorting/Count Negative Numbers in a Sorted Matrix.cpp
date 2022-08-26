class Solution {
public:
    int solve(vector<int>v)
    {
        int a;
        sort(v.begin(),v.end());
      v.erase(std::remove(v.begin(), v.end(), 0), v.end());
        a = upper_bound(v.begin(), v.end(), 0) - v.begin();
        return(a);
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();++i)
        {
            int count=solve(grid[i]);
            ans+=count;
        }
        return(ans);
    }
};
