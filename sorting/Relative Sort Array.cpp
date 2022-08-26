class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
      for(int i=0;i<arr1.size();++i)
      {
        mp[arr1[i]]++;
      }
      // debug(mp)
      vector<int>ans;
      for(int i=0;i<arr2.size();++i)
      {
        int p=arr2[i];
        if(mp.find(arr2[i])!=mp.end())
        {
          int cnt=mp[arr2[i]];
          for(int j=0;j<cnt;++j)
          {
            ans.push_back(p);
          }
          mp[arr2[i]]=0;
        }
      }
      for(auto it:mp)
  {
    int p=it.first;
    if(it.second!=0)
    {
      int k=it.second;
      for(int i=0;i<k;++i)
      {
        ans.push_back(p);
      }
      it.second=0;
    }
  }
        return(ans);
    }
};
