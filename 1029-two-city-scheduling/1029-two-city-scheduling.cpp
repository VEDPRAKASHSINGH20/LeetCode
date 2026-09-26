class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size() / 2;

        vector<pair<int, int>> people;

        for (int i = 0; i < costs.size(); i++) {
            int difference = costs[i][1] - costs[i][0];
            people.push_back({difference, i});
        }

        sort(people.begin(), people.end());

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int index = people[i].second;
            ans += costs[index][1];
        }

        for (int i = n; i < 2 * n; i++) {
            int index = people[i].second;
            ans += costs[index][0];
        }

        
        return ans;
    }
};