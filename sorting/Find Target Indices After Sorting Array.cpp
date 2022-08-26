class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int c=binary_search(nums.begin(),nums.end(),target);
        if(c!=1)
        {
            return{};
        }
        else
        {
            int a=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            int b=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
            for(int i=a;i<=b;++i)
            {
                ans.push_back(i);
            }
        }
        return(ans);
    }
};
