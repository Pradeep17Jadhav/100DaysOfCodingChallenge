/**
https://leetcode.com/problems/count-the-number-of-consistent-strings
Got a great chance to use find()
Getting grasp on this unique way to use for loop
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        int flag;
        for(auto str: words)
        {
            flag = true;
            for(auto letter: str)
            {
                if(allowed.find(letter) == -1)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};
