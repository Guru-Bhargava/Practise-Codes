class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1,a1,a2;
          while(l<=r)
          {
            if(numbers[l]+numbers[r]==target)
            {
              a1=l;
              a2=r;
              break;
            }
            else if(numbers[l]+numbers[r]>target)
            {
              r--;
            }
            else
            {
              l++;
            }
          }
        vector<int>ans;
        ans.push_back(a1+1);
        ans.push_back(a2+1);
        return(ans);
    }
};
