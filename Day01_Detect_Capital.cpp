//Leetcode Day01 (Detect Capital)

class Solution {
public:
    bool detectCapitalUse(string word) {
        int small=0,caps=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>=65 && word[i]<=90)
                caps++;
            else if(word[i]>=97 && word[i]<=122)
                small++;
        }
        if(caps==0 || small==0 || (caps==1 && (word[0]>=65 && word[0]<=90)))
            return true;
        else
            return false;
    }
};
