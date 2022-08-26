class Solution {
public:
    int compare(pair<int, int> p1, pair<int, int> p2) {
      if (p1.first == p2.first) 
      {
        return p1.second > p2.second; 
      }
      return p1.first < p2.first; 
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>>v;
  map<int,int>mp;
  for(int i=0;i<nums.size();++i)
  {
    mp[nums[i]]++;
  }
  for(auto it:mp) {
    int num=it.first;
    int occ=it.second;
    v.push_back({occ,num});
  }
  sort(v.begin(),v.end(),compare);
  vector<int>ans;
  for(int i=0;i<v.size();++i)
  {
    int cnt=v[i].first;
    int ele=v[i].second;
    for(int i=0;i<cnt;++i)
    {
      ans.push_back(ele);
    }
  }
        return(ans);
    }
};
