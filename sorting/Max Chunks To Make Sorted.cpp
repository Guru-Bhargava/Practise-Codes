/*
  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Max Chunks To Make Sorted.
  Memory Usage: 7.2 MB, less than 28.67% of C++ online submissions for Max Chunks To Make Sorted.
*/
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ma=0;
        int cc=0;
        for(int i=0;i<arr.size();i++){
            ma=max(ma,arr[i]);
            if(ma==i){
                cc++;
            }
        }
        return cc;
    }
};
