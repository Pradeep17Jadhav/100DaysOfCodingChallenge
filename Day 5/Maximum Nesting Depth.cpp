/**
https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses
*/

class Solution {
public:
    int maxDepth(string s) {
        int len = s.size();
        int count = 0;
        int max = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i] == '(')
                count++;
            if(s[i] == ')')
                count--;
            if(count > max)
                max = count;
        }
        return max;
    }
};
