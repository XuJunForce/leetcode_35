class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left =0;
        int res =n;
        int right = n-1;
        while(left<=right){
            int mid = ((right-left)>>1)+left;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                res = mid;
                right = mid -1; 
            }
            else{
                left = mid +1;
            }
        }
        return res;
    }
};
