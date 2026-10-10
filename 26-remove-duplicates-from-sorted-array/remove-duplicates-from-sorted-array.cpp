//tc => O(n)
// sc => O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0;
       int k = nums.size();
       for(int  j=1; j<k; j++){
        if(nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
       }
       return (i+1);
    }
};