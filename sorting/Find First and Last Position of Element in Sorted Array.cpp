class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        nums.erase(remove(nums.begin(), nums.end(), target+1), nums.end());
  int f=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
  int l=upper_bound(nums.begin(),nums.end(),target+1)-nums.begin()-1;
  if (find(nums.begin(), nums.end(), target) == nums.end())
  {
    ans.push_back(-1);
    ans.push_back(-1);
  }
  else 
  {
    ans.push_back(f);
    ans.push_back(l);
  }
  return(ans);
    }
};
