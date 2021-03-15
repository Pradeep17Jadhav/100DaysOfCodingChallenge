// https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int len = accounts.size();
        for(int i = 0; i < len; i++)
        {
            int size = accounts[i].size();
            int wealth = 0;
            for(int j = 0; j < size; j++)
            {
                wealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, wealth);
        }
        return maxWealth;
    }
};