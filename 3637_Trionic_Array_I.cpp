class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;

        for (int i=0;i<n-1;i++) {
            if (flag == 3) return false;
            if (flag % 2 == 0) {
                if (nums[i] == nums[i+1]) return false;
                if (nums[i] > nums[i+1]) {
                    if (i == 0) return false;
                    flag++;
                }
            }
            else {
                if (nums[i] == nums[i+1]) return false;
                if (nums[i] < nums[i+1]) {
                    if (i == n - 1) return false;
                    flag++;
                }
            }
        }
        return flag == 2;
    }
};
