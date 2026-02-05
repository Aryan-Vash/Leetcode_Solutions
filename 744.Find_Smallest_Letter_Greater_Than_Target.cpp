class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = target;
        int mini = 1e9;
        int n = letters.size();
        for (int i=0;i<n;i++) {
            if (letters[i] > target && mini > letters[i] - target) {
                mini = letters[i] - target;
                ans = letters[i];
            }
        }
        if (ans != target) return ans;
        return letters[0];
    }
};
