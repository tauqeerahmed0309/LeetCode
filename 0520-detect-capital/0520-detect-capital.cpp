class Solution {
public:
    bool detectCapitalUse(string word) {

        int capcount = 0;
        for (char ch : word) {
            if (isupper(ch))
                capcount++;
        }
        if (capcount == word.length())
       return true;
        if (capcount == 0)
            return true;
        if (capcount == 1 && isupper(word[0]))
            return true;



            
        return false;
    }
};