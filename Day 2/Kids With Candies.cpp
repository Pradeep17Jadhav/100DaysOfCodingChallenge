// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();
        vector<bool> ans;
        for(int i = 0; i < len; i++)
        {
            if(candies[i] + extraCandies >= *max_element(candies.begin(), candies.end()))
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};