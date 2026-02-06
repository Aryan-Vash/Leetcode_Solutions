class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l = 0, h = n - 1;
        if ((long long) nums[h] <= (long long) nums[l] * k) return 0;
        int ans = 1e9;

        for (l;l<n;l++) {
            int low = l;
            int high = n - 1;

            while (low <= high) {
                int mid = (low + high) / 2;
                long long num = nums[mid];
                if (num <= (long long) nums[l] * k) {
                    ans = min(ans, n - mid - 1 + l);
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return ans;
        
    }
};
