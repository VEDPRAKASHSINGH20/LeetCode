class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> mp = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        string temp;

        function<void(int)> solve = [&](int idx) {
            if (idx == digits.size()) {
                ans.push_back(temp);
                return;
            }

            string letters = mp[digits[idx] - '0'];

            for (char ch : letters) {
                temp.push_back(ch);
                solve(idx + 1);
                temp.pop_back();
            }
        };

        solve(0);
        return ans;
    }
};