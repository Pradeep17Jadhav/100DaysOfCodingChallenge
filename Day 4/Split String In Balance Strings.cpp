/**
https://leetcode.com/problems/split-a-string-in-balanced-strings

It was great to understand that in c++, single quote is used for char and double quotes for string. Totally forgot this after college days! 
*/

class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0;
        int r = 0;
        int count = 0;
        int len = s.size();
        for(int i = 0; i < len; i++)
        {
            char letter = s[i];
            if(letter == 'L')
                l += 1;
            else if(letter == 'R')
                r += 1;
            
            if(l == r)
            {
                count++;
                l = 0;
                r = 0;
            }
        }
        return count;
    }
};
