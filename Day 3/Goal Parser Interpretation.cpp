/**
 https://leetcode.com/problems/goal-parser-interpretation/
 Learned about find() and replace() method
*/

class Solution {
public:
    string interpret(string command) {
        bool search = true;
        int pos;
        while(search == true)
        {
            int pos = command.find("()");
            if(pos >= 0)
                command.replace(pos, 2, "o");
            else
                search = false;
        }
        search = true;
            
        while(search == true)
        {
            int pos = command.find("(al)");
            if(pos >= 0)
                command.replace(pos, 4, "al");
            else
                search = false;
        }
        return command;
    }
};
