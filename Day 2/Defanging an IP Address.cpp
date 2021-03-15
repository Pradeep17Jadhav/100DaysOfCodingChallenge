// https://leetcode.com/problems/defanging-an-ip-address 

class Solution {
public:
    string defangIPaddr(string address) {
        //int index = 0;
        for(int i = 0; i < address.size(); i++)
        {
            int index = address.find(".", i);
            if(index == -1)
                break;
            address.replace(index, 1, "[.]");
            i = index + 3;
        }       
        return address;
    }
};