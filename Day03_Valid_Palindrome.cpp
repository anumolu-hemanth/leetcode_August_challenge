//Leetcode Day03 (Valid Palindrome)

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1,count=0;
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
                count++;
        }
        if(count)
        {
            while(i<j)
            {
                while(!isalnum(s[i]))
                    i++;
                while(!isalnum(s[j]))
                    j--;
                if(tolower(s[i])==tolower(s[j]))
                {
                    i++; j--;
                }
                else
                    return false;
            }
        }
        return true;
    }
};
