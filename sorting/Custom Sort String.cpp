/*
  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Custom Sort String.
  Memory Usage: 6.2 MB, less than 62.03% of C++ online submissions for Custom Sort String.
*/

class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        string ans;
  for(int i=0;i<s.size();++i)
  {
    mp[s[i]]++;
  }
  for(int i=0;i<order.size();++i)
  {
    if(mp.find(order[i])!=mp.end())
    {
      char k=order[i];
      int temp=mp[order[i]];
      for(int i=0;i<temp;++i)
      {
        ans+=k;
      }
      mp[order[i]]=0;
    }
  }
  for(auto it:mp){
    int occ=it.second;
    char st=it.first;
    if(occ>0)
    {
      for(int i=0;i<occ;++i)
      {
        ans+=st;
      }
    }
  }
  return(ans);
    }
};
