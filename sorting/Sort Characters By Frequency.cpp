class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
  for(int i=0;i<s.size();++i)
  {
    mp[s[i]]++;
  }
  vector<pair<int,char>>v;
  for(auto it:mp)
  {
    int freq=it.second;
    char cha=it.first;
    v.push_back({freq,cha});
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  string ans;
  for(int i=0;i<v.size();++i)
  {
    int freq=v[i].first;
    char st=v[i].second;
    for(int i=0;i<freq;++i)
    {
      ans+=st;
    }
  }
  return(ans);
    }
};
