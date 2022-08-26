class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
  int n=arr.size();
  for(int i=0;i<n;++i)
  {
    mp[arr[i]]++;
  }
  int ans;
  float cnt=n*(0.25);
  for(auto it:mp)
  {
    if(it.second>cnt)
    {
      ans=it.first;
      break;
    }
  }
        return(ans);
    }
};
