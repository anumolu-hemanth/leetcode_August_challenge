//Leetcode Day04 (Power of Four)

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==0)
            return false;
        else if(num==1)
            return true;
        else
        {
            while(num!=0)
            {
                if(num%4!=0)
                    return false;
                else if(num==4)
                    break;
                else
                    num=num/4;
            }
            return true;
        }
    }
};
