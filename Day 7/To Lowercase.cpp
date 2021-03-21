/*
https://leetcode.com/problems/to-lower-case
Learned how to convert characters from ASCII code in c++
Did not use built in function tolower()
*/

class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 65 && str[i] <= 90)
                str[i] = (char)(str[i] + 32);
        }
        return str;
    }
};
