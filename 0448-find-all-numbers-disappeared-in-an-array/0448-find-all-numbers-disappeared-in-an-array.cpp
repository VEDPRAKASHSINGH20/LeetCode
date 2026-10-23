class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        set<int> s;

        for(int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }

        int num = 1;
        vector<int> v;

        for(int x : s) {
            while(num < x) {
                v.push_back(num);
                num++;
            }
            num++;
        }

        while(num <= n) {
            v.push_back(num);
            num++;
        }

        return v;
    }
};