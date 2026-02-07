class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 1e9;
        int cnt_a = 0, cnt_b = 0, n = s.length();
        if (n == 1) return 0;


        vector<int> pre(n, 0), suf(n, 0);
        if (s[0] == 'b') pre[0] = 1, cnt_b++;
        if (s[n-1] == 'a') suf[n-1] = 1, cnt_a++;

        for (int i=1;i<n;i++) {
            pre[i] = pre[i-1];
            if (s[i] == 'b') pre[i]++, cnt_b++;
            else cnt_a++;

        }

        for (int i=n-2;i>=0;i--) {
            suf[i] = suf[i+1];
            if (s[i] == 'a') suf[i]++;
        }

        if (cnt_a == n || cnt_b == n) return 0;

        for (int i=0;i<n;i++) {
            ans = min(pre[i] + suf[i] - 1, ans);
        }
        return ans;
    }
};
