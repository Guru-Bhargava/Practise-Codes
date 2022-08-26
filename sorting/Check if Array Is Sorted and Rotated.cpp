/* 
  Runtime: 0 ms, faster than 100% of C++ online submissions for Check if Array Is Sorted and Rotated.
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]>nums[(i+1)%(nums.size())]) cnt++;
        }
        if(cnt>1) return(false);
        else return(true);
    }
};
