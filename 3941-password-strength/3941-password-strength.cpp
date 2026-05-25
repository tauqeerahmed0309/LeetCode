class Solution {
public:
    int passwordStrength(string password) {
         unordered_set<char>low;
        unordered_set<char>upp;
        unordered_set<char>dig;
        unordered_set<char>spch;
        for(char ch:password){
            if(islower(ch)){
                low.insert(ch);
            }
            else if(isupper(ch)){
                upp.insert(ch);
            }
            else if(isdigit(ch)){
                dig.insert(ch);
            }
            else if(ch=='!' || ch=='@' || ch=='#' || ch=='$'){
                spch.insert(ch);
            }
            
        }
        int count=0;
        count+=low.size()*1;
        count+=upp.size()*2;
        count+=dig.size()*3;
        count+=spch.size()*5;
        return count;
    }
   
};