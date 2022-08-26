class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>oddindices;
  vector<int>evenindices;
  for(int i=0;i<nums.size();++i)
  {
    if(i%2==0)
    {
      evenindices.push_back(nums[i]);
    }
    else
    {
      oddindices.push_back(nums[i]);
    }
  }
  sort(evenindices.begin(),evenindices.end());
  sort(oddindices.begin(),oddindices.end(),greater<int>());
  vector<int>ans;
  if (evenindices.size()==oddindices.size())
  {
    for (int i = 0; i < evenindices.size(); ++i) {
      ans.push_back(evenindices[i]);
      ans.push_back(oddindices[i]);
    }
  } else if (evenindices.size() > oddindices.size())
  {
    for (int i = 0; i < oddindices.size(); ++i) {
      ans.push_back(evenindices[i]);
      ans.push_back(oddindices[i]);
    }
    ans.push_back(evenindices[evenindices.size()-1]);
  }
  else
  {
    for (int i = 0; i < evenindices.size(); ++i) {
      ans.push_back(evenindices[i]);
      ans.push_back(oddindices[i]);
    }
    ans.push_back(oddindices[oddindices.size() - 1]);
  }
        return(ans);
    }
};
