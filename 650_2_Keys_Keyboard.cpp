class Solution {
public:
    vector<int> primes(int n) {
        vector<int> ans;
        for (int i=2;i<=n;i++) {
            while (n % i == 0) {
                ans.push_back(i);
                n /= i;
            }
        }
        return ans;
    }
    int minSteps(int n) {
        if (n == 1) return 0;
        vector<int> prime_factors = primes(n);

        if (prime_factors.empty()) return n;

        int ans = 0;
        for (int i=0;i<prime_factors.size();i++) {
            ans += prime_factors[i];
            // cout << prime_factors[i];
        }
        return ans;
    }
};
